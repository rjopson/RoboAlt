
#ifndef _MATRIX_H
#define _MATRIX_H

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
	T getValue(const int& row, const int& column);
	std::vector<T> getRow(const int& row);
	std::vector<T> getColumn(const int& column);
	std::vector<T> getLastRow();
	std::vector<T> getLastColumn();

	//set values
	void setValue(const int& row, const int& column, const T& value);
	void insertRow(const int& row, const std::vector<T>& data);
	void expandRows(const Matrix& a);
	//void insertColumn(const int& column, const std::vector<T>& data);
	void addRow(const std::vector<T>& row); //slow...
	void addColumn(const std::vector<T>& column); //slow...

	//operators
	Matrix operator+(const Matrix& a) const;
	Matrix operator-(const Matrix& a) const;
	Matrix operator*(const Matrix& a) const;
	void operator=(const Matrix& a) const;	

	//matrix math
	Matrix addScalar(const T& scalar);
	Matrix multiplyScalar(const T& scalar);
	Matrix transpose();
	Matrix inverse();
	
	//float determinant2x2();

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

