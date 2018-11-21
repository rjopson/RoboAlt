/*
 * matrixMath.cpp
 *
 * This class implements simple matrix math operations which are used for Kalman filtering
 * Class contains:
 *	-matrix object
 *	-math operators (+,-,*,=,transpose,inverse2x2)
 */

#include "matrixMath.h"

matrixMath::matrixMath(const uint8_t& rowsIn, const uint8_t& columnsIn) {
	rows = rowsIn;
	columns = columnsIn;
	lengthTotal = rows * columns;
	
	elements = new float[lengthTotal]();
	for (int i = 0; i != lengthTotal; i++) {
		elements[i] = 0;
	}
}

matrixMath::matrixMath(const uint8_t& rowsIn, const uint8_t& columnsIn, const float *elementsIn) {

	rows = rowsIn;
	columns = columnsIn;
	lengthTotal = rows * columns;

	elements = new float[lengthTotal]();
	for (int i = 0; i != lengthTotal; i++) {
		elements[i] = elementsIn[i];
	}
}

matrixMath::matrixMath(const matrixMath& matrixIn) {
	rows = matrixIn.rows;
	columns = matrixIn.columns;
	lengthTotal = rows * columns;

	elements = new float[lengthTotal]();
	for (int i = 0; i != lengthTotal; i++) {
		elements[i] = matrixIn.elements[i];
	}
}

matrixMath::~matrixMath() {
	delete elements;
}

void matrixMath::setValue(const uint8_t& row, const uint8_t& column, const float& data) {

	int location = row * columns + column;
	elements[location] = data;
}

float matrixMath::getValue(const uint8_t& row, const uint8_t& column) const {

	int location = row * columns + column;
	return elements[location];
}

matrixMath matrixMath::operator+(const matrixMath& a) const {

	matrixMath result(rows, columns);

	if (rows == a.rows && columns == a.columns) {
		for (int i = 0; i != rows; i++) {
			for (int j = 0; j != columns; j++) {
				result.setValue(i, j, (getValue(i, j) + a.getValue(i, j)));
			}
		}		
	}
	return result;
}

matrixMath matrixMath::operator-(const matrixMath& a) const {

	matrixMath result(rows, columns);

	if (rows == a.rows && columns == a.columns) {
		for (int i = 0; i != rows; i++) {
			for (int j = 0; j != columns; j++) {
				result.setValue(i, j, getValue(i, j) - a.getValue(i, j));
			}
		}
	}
	return result;
}

matrixMath matrixMath::operator*(const matrixMath& a) const {

	matrixMath result(rows, a.columns);

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

void matrixMath::operator=(const matrixMath& a) const {

	for (int i = 0; i != lengthTotal; i++) {
		elements[i] = a.elements[i];
	}
}

matrixMath matrixMath::transpose() {

	matrixMath result(columns, rows);
	for (int i = 0; i != rows; i++) {
		for (int j = 0; j != columns; j++) {
			result.setValue(j, i, getValue(i, j));
		}
	}
	return result;
}

matrixMath matrixMath::inverse2x2() {

	matrixMath result(rows, columns);
	float det = determinant2x2();

	result.setValue(0, 0, det*getValue(1, 1));
	result.setValue(0, 1, -det * getValue(0, 1));
	result.setValue(1, 0, -det * getValue(1, 0));
	result.setValue(1, 1, det*getValue(0, 0));
	return result;
}

float matrixMath::determinant2x2() {

	return (float)1.0 / (getValue(0, 0)*getValue(1, 1) - getValue(0, 1)*getValue(1, 0));
}