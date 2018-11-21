/*
 * matrixMath.h
 *
 * This class implements simple matrix math operations which are used for Kalman filtering
 * Class contains:
 *	-matrix object
 *	-math operators (+,-,*,=,transpose,inverse2x2)
 */

#ifndef _MATRIX_MATH_h
#define _MATRIX_MATH_h

#include <inttypes.h>

class matrixMath {

public:
	matrixMath(const uint8_t& rowsIn, const uint8_t& columnsIn);
	matrixMath(const uint8_t& rowsIn, const uint8_t& columnsIn, const float *elementsIn);
	matrixMath(const matrixMath& matrixIn);
	~matrixMath();

	uint8_t rows;
	uint8_t columns;
	float *elements;
	uint8_t lengthTotal;

	void setValue(const uint8_t& row, const uint8_t& column, const float& data);
	float getValue(const uint8_t& row, const uint8_t& column) const;

	matrixMath operator+(const matrixMath& a) const;
	matrixMath operator-(const matrixMath& a) const;
	matrixMath operator*(const matrixMath& a) const;
	void operator=(const matrixMath& a) const;
	matrixMath transpose();
	matrixMath inverse2x2();
	float determinant2x2();
};
#endif

