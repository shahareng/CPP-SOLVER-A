#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;

namespace solver
{
    //// solver ////
    
    double solve(const RealVariable& num)
    {
        return 7;
    }

    complex<double> solve(const ComplexVariable& num)
    {
        return 4;
    }

    //// RealVariable ////

    RealVariable operator*(const int num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator*(const double num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator*(const RealVariable num1, const int num2)
    {
        return num1;
    }

    RealVariable operator*(const RealVariable num1, const double num2)
    {
        return num1;
    }
    
    RealVariable operator-(const int num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator-(const RealVariable num1, const int num2)
    {
        return num1;
    }

    RealVariable operator-(const RealVariable num1, const double num2)
    {
        return num1;
    }

    RealVariable operator-(const double num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator-(const RealVariable num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator+(const int num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator+(const RealVariable num1, const int num2)
    {
        return num1;
    }

    RealVariable operator+(const RealVariable num1, const double num2)
    {
        return num1;
    }

    RealVariable operator+(const double num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator+(const RealVariable num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator^(const RealVariable num1, const int num2)
    {
        return num1;
    }

    RealVariable operator^(const int num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator==(const RealVariable num1, const int num2)
    {
        return num1;
    }

    RealVariable operator==(const int num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator==(const RealVariable num1, const double num2)
    {
        return num1;
    }

    RealVariable operator==(const double num1, const RealVariable num2)
    {
        return num2;
    }

    RealVariable operator==(const RealVariable num1, const RealVariable num2)
    {
        return num1;
    }

    RealVariable operator/(const RealVariable num1, const int num2)
    {
        return num1;
    }

    RealVariable operator/(const RealVariable num1, const double num2)
    {
        return num1;
    }

    RealVariable operator/(const RealVariable num1, const RealVariable num2)
    {
        return num1;
    }

    //// ComplexVariable ////

    ComplexVariable operator*(const int num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator*(const complex<double> num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator-(const ComplexVariable num1, const int num2)
    {
        return num1;
    }

    ComplexVariable operator-(const ComplexVariable num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator-(const ComplexVariable num1, const complex<double> num2)
    {
        return num1;
    }

    complex<double> operator-(const int num1, const complex<double> num2)
    {
        return num2;
    }

    ComplexVariable operator-(const complex<double> num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator-(const int num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator+(const int num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator+(const ComplexVariable num1, const int num2)
    {
        return num1;
    }

    ComplexVariable operator+(const ComplexVariable num1, const ComplexVariable num2)
    {
        return num1;
    }

    ComplexVariable operator+(const ComplexVariable num1, const complex<double> num2)
    {
        return num1;
    }

    ComplexVariable operator+(const complex<double> num1, const ComplexVariable num2)
    {
        return num2;
    }

    complex<double> operator+(const int num1, const complex<double> num2)
    {
        return num2;
    }

    ComplexVariable operator^(const ComplexVariable num1, const int num2)
    {
        return num1;
    }

    ComplexVariable operator==(const int num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator==(const ComplexVariable num1, const int num2)
    {
        return num1;
    }

    ComplexVariable operator==(const ComplexVariable num1, const ComplexVariable num2)
    {
        return num1;
    }

    ComplexVariable operator==(const complex<double> num1, const ComplexVariable num2)
    {
        return num2;
    }

    ComplexVariable operator==(const ComplexVariable num1, const complex<double> num2)
    {
        return num1;
    }

    ComplexVariable operator/(const ComplexVariable num1, const int num2)
    {
        return num1;
    }

    ComplexVariable operator/(const ComplexVariable num1, const complex<double> num2)
    {
        return num1;
    }

};