#pragma once
#include <vector>
#include <algorithm>

class Matrix{

    /*
    assume matrix:
    
    | A B |
    | C D |*/
    private:
    std::vector<double> matrix;
    
    int col, row;
    public:
    Matrix() : matrix(4, 0.0), col(2), row(2) {}
    Matrix(const Matrix& obj);
    double& at(int row, int col){return matrix[row*2+col];}
    double at(int row, int col)const{return this->matrix[row* 2 + col];}
    friend Matrix operator+(Matrix& lhs, Matrix& rhs);
    friend Matrix operator*(Matrix& lhs, int rhs);
    friend Matrix operator*(Matrix& lhs, Matrix& rhs);
    friend bool operator==(const Matrix& lhs, const Matrix& rhs);
};

