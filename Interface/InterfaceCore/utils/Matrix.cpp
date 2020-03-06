
#include "Matrix.h"

template <class T>
Matrix<T>::Matrix(const int& in_rows, const int& in_columns) {
	rows = in_rows;
	columns = in_columns;

	elements.resize(rows*columns);
}

template <class T>
Matrix<T>::Matrix(const int& in_rows, const int& in_columns, const std::vector<T>& in_elements) {
	rows = in_rows;
	columns = in_columns;
	elements = in_elements;
}

template <class T>
Matrix<T>::~Matrix() {


}

template <class T>
void Matrix<T>::resize(const int& in_rows, const int& in_columns) {
	rows = in_rows;
	columns = in_columns;
	elements.resize(rows*columns);
}

template <class T>
T Matrix<T>::getValue(const int& row, const int& column)  const {
	int location = row * columns + column;
	return elements[location];
}

template <class T>
std::vector<T> Matrix<T>::getRow(const int& row)  const {
	std::vector<T> result(columns);

	for (int column = 0; column != columns; column++) {
		int location = row * columns + column;
		result[column] = elements[location];
	}
	return result;
}

/*
  0,1,2
0,a,b,c,
1,d,e,f
2,g,h,i

length is 3*3 = 9
*/
template <class T>
std::vector<T> Matrix<T>::getColumn(const int& column)  const {
	std::vector<T> result(rows);
	for (int row = 0; row != rows; row++) {
		int location = row *columns + column ;
		result[row] = elements[location];
	}
	return result;
}

template <class T>
std::vector<T> Matrix<T>::getLastRow()  const {
	return getRow(rows - 1);
}

template <class T>
std::vector<T> Matrix<T>::getLastColumn()  const {
	return getColumn(columns - 1);
}

template <class T>
void Matrix<T>::setValue(const int& row, const int& column, const T& value) {
	int location = row * columns + column;
	elements[location] = value;
}

template <class T>
void Matrix<T>::addRow(const std::vector<T>& row) {
	
	if (row.size() == columns) {
		elements.insert(elements.end(), row.begin(), row.end());
		rows++;
	}	
}

template <class T>
void Matrix<T>::insertRow(const int& row, const std::vector<T>& data) {

	for (int i = 0; i != columns; i++) {
		int location = i + row * columns;
		elements[location] = data[i];
	}
}

template <class T>
void Matrix<T>::expandRows(const Matrix<T>& a) {

	int rowsOriginal = rows;
	resize(rows + a.rows, columns);

	for (int i = 0; i != a.rows; i++) {
		insertRow(i + rowsOriginal, a.getRow(i));
	}
}

template <class T>
void Matrix<T>::addColumn(const std::vector<T>& column) {

	if (column.size() == rows) {
		for (int i = 0; i != rows; i++) {
			int location = i * columns + columns + i;

			elements.insert(elements.begin() + location, column[i]);
		}
		columns++;
	}
}

template <class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& a)  const {

	Matrix<T> result(rows, columns);

	if (rows == a.rows && columns == a.columns) {
		for (int i = 0; i != rows; i++) {
			for (int j = 0; j != columns; j++) {
				result.setValue(i, j, (getValue(i, j) + a.getValue(i, j)));
			}
		}
	}
	return result;
}

template <class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T>& a)  const {

	Matrix<T> result(rows, columns);

	if (rows == a.rows && columns == a.columns) {
		for (int i = 0; i != rows; i++) {
			for (int j = 0; j != columns; j++) {
				result.setValue(i, j, getValue(i, j) - a.getValue(i, j));
			}
		}
	}
	return result;
}

template <class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& a)  const {

	Matrix<T> result(rows, a.columns);

	if (columns == a.rows) {
		for (int i = 0; i != rows; i++) {
			for (int j = 0; j != a.columns; j++) {
				for (int k = 0; k != columns; k++) {
					result.setValue(i, j, result.getValue(i, j) + getValue(i, k) * a.getValue(k, j));
				}
			}
		}
	}
	return result;
}

template <class T>
void Matrix<T>::operator=(const Matrix<T>& a)  {

	resize(a.rows, a.columns);

	for (int i = 0; i != rows * columns; i++) {
		elements[i] = a.elements[i];
	}	
}

template <class T>
void Matrix<T>::print() {

	for (int row = 0; row != rows; row++) {
		for (int column = 0; column != columns; column++) {
			std::cout << elements[column + row * columns] << ", ";
		}
		std::cout << std::endl;
	}
}


//template class Matrix<int>;
template class Matrix<double>;

