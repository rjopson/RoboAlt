
#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>

template <class T>
class Matrix
{
public:
	Matrix(const int& in_rows, const int& in_columns);
	Matrix(const int& in_rows, const int& in_columns, const std::vector<T>& in_elements);
	//Matrix(const matrix& in_matrix);
	~Matrix();

	void resize(const int& in_rows, const int& in_columns);

	//get values
	T getValue(const int& row, const int& column) const;
	std::vector<T> getRow(const int& row) const;
	std::vector<T> getColumn(const int& column) const;
	std::vector<T> getLastRow() const;
	std::vector<T> getLastColumn() const;

	//set values
	void setValue(const int& row, const int& column, const T& value);
	void insertRow(const int& row, const std::vector<T>& data);
	void expandRows(const Matrix& a);
	//void insertColumn(const int& column, const std::vector<T>& data);
	void addRow(const std::vector<T>& row); //slow...
	void addColumn(const std::vector<T>& column); //slow...

	//operators
	Matrix<T> operator+(const Matrix<T>& a) const;
	Matrix<T> operator-(const Matrix<T>& a) const;
	Matrix<T> operator*(const Matrix<T>& a) const;
	void operator=(const Matrix<T>& a);

	//matrix math
	//Matrix<T> addScalar(T& scalar);
	//Matrix<T> multiplyScalar(T& scalar);
	//Matrix<T> transpose();
	//Matrix<T> inverse();
	
	//float determinant2x2();

	void print(); //for debugging

//private:

/* user is entering data based on matrix below. 
	-rows, columns are still total count (in this example, each would be 3):

  0,1,2
0,a,b,c,
1,d,e,f
2,g,h,i
*/
	int rows;
	int columns;
	std::vector<T> elements;
};
#endif

