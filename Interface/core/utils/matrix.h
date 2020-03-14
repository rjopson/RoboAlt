
#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>

template <class T>
class Matrix
{
public:
    Matrix(const int& rows, const int& columns);
    Matrix(const int& rows, const int& columns, const std::vector<T>& elements);
    //Matrix(const matrix& in_matrix);
    ~Matrix();

    void Resize(const int& rows, const int& columns);

    //get values
    T GetValue(const int& row, const int& column) const;
    std::vector<T> GetRow(const int& row) const;
    std::vector<T> GetColumn(const int& column) const;
    std::vector<T> GetLastRow() const;
    std::vector<T> GetLastColumn() const;

    //set values
    void SetValue(const int& row, const int& column, const T& value);
    void InsertRow(const int& row, const std::vector<T>& data);
    void ExpandRows(const Matrix& a);
    //void InsertColumn(const int& column, const std::vector<T>& data);
    void AddRow(const std::vector<T>& row); //slow...
    void AddColumn(const std::vector<T>& column); //slow...

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

    void Print(); //for debugging

//private:
    int rows_;
    int columns_;
    std::vector<T> elements_;
};
#endif

