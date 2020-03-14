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

    for (int row = 0; row != rows_; row++) {
        for (int column = 0; column != columns_; column++) {
            std::cout << elements_[column + row * columns_] << ", ";
        }
        std::cout << std::endl;
    }
}

//template class Matrix<int>;
template class Matrix<double>;

