#pragma once
#include <vector>
#include <algorithm>

class Matrix{

    private:
    std::vector<double> matrix;
    int size; 
    public:
    Matrix();
    Matrix(const Matrix& obj);
    friend Matrix& operator+(Matrix& lhs, Matrix& rhs);
    friend Matrix& operator*(Matrix& lhs, int rhs);
    friend Matrix& operator*(Matrix& lhs, Matrix& rhs);
    friend bool operator==(const Matrix& lhs, const Matrix& rhs);
};

 Matrix& operator+(Matrix& lhs, Matrix& rhs)
{
    // for(std::vector<double>::const_iterator it = lhs.matrix.begin();  it != lhs.matrix.end(); ++it)
    // {
    //     it.
    // }
    for(int i = 0; i < lhs.matrix.size(); i++)
    {
        lhs.matrix[i] += rhs.matrix[i];
    }
    
    return lhs;
}

Matrix& operator*(Matrix &lhs, int rhs)
{
    for(int i = 0; i < lhs.matrix.size(); i++)
    {
        lhs.matrix[i] *= rhs;
    }
    return lhs;
}

Matrix& operator*(Matrix& lhs, Matrix& rhs)
{
    for(int i = 0; i < lhs.matrix.size(); i++)
    {
        lhs.
    }
}