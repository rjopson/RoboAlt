#include "Matrix.h"

template <class T>
Matrix<T>::Matrix(const int& rows, const int& columns) 

    : rows_(rows),
      columns_(columns) {

    elements_.resize(rows*columns);
}

template <class T>
Matrix<T>::Matrix(const int& rows, const int& columns, const std::vector<T>& elements)

    : rows_(rows),
    columns_(columns),
    elements_(elements) {}

template <class T>
Matrix<T>::~Matrix() {}

template <class T>
void Matrix<T>::Resize(const int& rows, const int& columns) {
    rows_ = rows;
    columns_ = columns;
    elements_.resize(rows*columns);
}

template <class T>
T Matrix<T>::GetValue(const int& row, const int& column)  const {
    int location = row * columns_ + column;
    return elements_[location];
}

template <class T>
int Matrix<T>::GetRowSize() const {
    return rows_;
}

template <class T>
int Matrix<T>::GetColumnSize() const {
    return columns_;
}

template <class T>
bool Matrix<T>::IsSquare() const {

    if (rows_ == columns_) {
        return true;
    }
    else {
        return false;
    }
}

template <class T>
bool Matrix<T>::IsSingular() const {

    T det = Determinant();
    if (det == 0) {
        return true;
    }
    else {
        return false;
    }
}

template <class T>
std::vector<T> Matrix<T>::GetRow(const int& row)  const {
    
    std::vector<T> result(columns_);

    for (int column = 0; column != columns_; column++) {
        int location = row * columns_ + column;
        result[column] = elements_[location];
    }
    return result;
}

template <class T>
std::vector<T> Matrix<T>::GetColumn(const int& column)  const {
    
    std::vector<T> result(rows_);

    for (int row = 0; row != rows_; row++) {
        int location = row *columns_ + column ;
        result[row] = elements_[location];
    }
    return result;
}

template <class T>
std::vector<T> Matrix<T>::GetLastRow()  const {
    return GetRow(rows_ - 1);
}

template <class T>
std::vector<T> Matrix<T>::GetLastColumn()  const {
    return GetColumn(columns_ - 1);
}

template <class T>
Matrix<T> Matrix<T>::Transpose() const {

    Matrix<T> result(columns_, rows_);
    for (int i = 0; i != rows_; i++) {
        for (int j = 0; j != columns_; j++) {
            result.SetValue(j, i, GetValue(i, j));
        }
    }
    return result;
}

template <class T>
T Matrix<T>::Determinant() const {

    if (IsSquare()) { //matrix is square
        return DeterminantRecursive(*this);
    }
    else {
        return NAN;
    }
}

template <class T>
Matrix<T> Matrix<T>::Inverse() const {

    Matrix<T> adjoint = Adjoint();
    T det = Determinant();
    Matrix<T> result(GetRowSize(), GetColumnSize());

    if (!IsSquare()) {
        std::vector<T> bad {NAN};
        Matrix<T> bad_m(1, 1, bad);
        return bad_m;
    }

    if (det == 0) {
        std::vector<T> bad{ NAN };
        Matrix<T> bad_m(1, 1, bad);
        return bad_m;
    }

    for (int i = 0; i != GetRowSize(); i++) {
        for (int j = 0; j != GetRowSize(); j++) {
            T val = adjoint.GetValue(i, j) / det;
            result.SetValue(i, j, val);
        }
    }
    return result;
}

template <class T>
void Matrix<T>::SetValue(const int& row, const int& column, const T& value) {
    int location = row * columns_ + column;
    elements_[location] = value;
}

template <class T>
void Matrix<T>::AddRow(const std::vector<T>& row) {
    
    if (row.size() == columns_) {
        elements_.insert(elements_.end(), row.begin(), row.end());
        rows_++;
    }	
}

template <class T>
void Matrix<T>::InsertRow(const int& row, const std::vector<T>& data) {

    for (int i = 0; i != columns_; i++) {
        int location = i + row * columns_;
        elements_[location] = data[i];
    }
}

template <class T>
void Matrix<T>::ExpandRows(const Matrix<T>& a) {

    int rows_original = rows_;
    Resize(rows_ + a.rows_, columns_);

    for (int i = 0; i != a.rows_; i++) {
        InsertRow(i + rows_original, a.GetRow(i));
    }
}

template <class T>
void Matrix<T>::AddColumn(const std::vector<T>& column) {

    if (column.size() == rows_) {
        for (int i = 0; i != rows_; i++) {
            int location = i * columns_ + columns_ + i;

            elements_.insert(elements_.begin() + location, column[i]);
        }
        columns_++;
    }
}

template <class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& a)  const {

    Matrix<T> result(rows_, columns_);

    if (rows_ == a.rows_ && columns_ == a.columns_) {
        for (int i = 0; i != rows_; i++) {
            for (int j = 0; j != columns_; j++) {
                result.SetValue(i, j, (GetValue(i, j) + a.GetValue(i, j)));
            }
        }
    }
    return result;
}

template <class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T>& a)  const {

    Matrix<T> result(rows_, columns_);

    if (rows_ == a.rows_ && columns_ == a.columns_) {
        for (int i = 0; i != rows_; i++) {
            for (int j = 0; j != columns_; j++) {
                result.SetValue(i, j, GetValue(i, j) - a.GetValue(i, j));
            }
        }
    }
    return result;
}

template <class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& a)  const {

    Matrix<T> result(rows_, a.columns_);

    if (columns_ == a.rows_) {
        for (int i = 0; i != rows_; i++) {
            for (int j = 0; j != a.columns_; j++) {
                for (int k = 0; k != columns_; k++) {
                    result.SetValue(i, j, result.GetValue(i, j) + GetValue(i, k) * a.GetValue(k, j));
                }
            }
        }
    }
    return result;
}

template <class T>
void Matrix<T>::operator=(const Matrix<T>& a)  {

    Resize(a.rows_, a.columns_);

    for (int i = 0; i != rows_ * columns_; i++) {
        elements_[i] = a.elements_[i];
    }	
}

template <class T>
void Matrix<T>::Print() {

    std::cout << std::endl;
    for (int row = 0; row != rows_; row++) {
        for (int column = 0; column != columns_; column++) {
            std::cout << elements_[column + row * columns_] << ", ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

template <class T>
Matrix<T> Matrix<T>::RemoveElementRowAndColumn(const int& row_element, const int& col_element) const {

    Matrix<T> result(rows_ - 1, columns_ - 1);
    int i = 0, j = 0;

    for (int row = 0; row != rows_; row++) {
        
        for (int col = 0; col != columns_; col++) {
            
            if (row != row_element && col != col_element) {
                
                result.SetValue(i, j++, GetValue(row, col));

                if (j == result.GetRowSize()) {
                    j = 0;
                    i++;
                }
            }
        }
    }
    return result;
}

template <class T>
T Matrix<T>::Cofactor(const int& row_element, const int& col_element) const {

    Matrix<T> remove_row_col = RemoveElementRowAndColumn(row_element, col_element);
    int sign = ((row_element + col_element) % 2 == 0) ? 1 : -1;
    return sign*DeterminantRecursive(remove_row_col);
}

template <class T>
Matrix<T> Matrix<T>::CofactorMatrix() const {

    Matrix<T> result(GetRowSize(), GetColumnSize());

    for (int i = 0; i != GetRowSize(); i++) {
        for (int j = 0; j != GetRowSize(); j++) {
            result.SetValue(i, j, Cofactor(i, j));
        }
    }
    return result;
}

template <class T>
T Matrix<T>::DeterminantRecursive(Matrix<T> matrix) const {

    T det = 0; //initialize

    if (matrix.GetRowSize() == 1) { //base case - if matrix is 1x1
        return matrix.GetValue(0, 0);
    }

    int sign = 1;
    
    //iterate through each elem of first row
    for (int i = 0; i != matrix.GetColumnSize(); i++) {

        Matrix<T> remove_row_col = matrix.RemoveElementRowAndColumn(0, i);
        det += sign * matrix.GetValue(0, i) * DeterminantRecursive(remove_row_col);
        sign = -sign;
    }
    return det;
}


template <class T>
Matrix<T> Matrix<T>::Adjoint() const {

    Matrix<T> cofactor = CofactorMatrix();
    Matrix<T> adjoint = cofactor.Transpose();
    return adjoint;
}

//template class Matrix<int>;
template class Matrix<double>;

