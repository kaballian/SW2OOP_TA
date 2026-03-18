#include "matrix.h"

Matrix::Matrix(const Matrix& obj)
{
    this->col = obj.col;
    this->row = obj.row;
    
    for(int i = 0 ;i < 4; i++)
    {
        this->matrix[i] = obj.matrix[i];
    }
}
 Matrix operator+(Matrix& lhs, Matrix& rhs)
{
    Matrix mat;
    for(int i = 0; i < 4; i++)
    {
        mat.matrix[i] = lhs.matrix[i] + rhs.matrix[i];
    }
    
    return mat;
}

Matrix operator*(Matrix &lhs, int rhs)
{
    Matrix mat;
    for(int i = 0; i < 4; i++)
    {
        mat.matrix[i] = lhs.matrix[i] * rhs;
    }
    return mat;
}

Matrix operator*(Matrix& lhs, Matrix& rhs)
{
    Matrix mat;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mat.at(i, j) = 0;
            for (int k = 0; k < 2; k++) {
                mat.at(i, j) += lhs.at(i, k) * rhs.at(k, j);
            }
        }
    }
    return mat;
}

bool operator==(const Matrix& lhs, const Matrix& rhs)
{
    
    for(int i = 0; i < 4; i++)
    {
        if(lhs.matrix[i] != rhs.matrix[i])
            return false;
    }


    return true;
}