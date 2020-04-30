#include <iostream>
#include <complex>
using namespace std;


namespace solver
{
    class RealVariable
    {
        public:
        
        RealVariable()
        {

        }

        friend RealVariable operator*(const int, const RealVariable);
        friend RealVariable operator*(const double, const RealVariable);
        friend RealVariable operator*(const RealVariable, const int);
        friend RealVariable operator*(const RealVariable, const double);

        friend RealVariable operator-(const int, const RealVariable);
        friend RealVariable operator-(const RealVariable, const int);
        friend RealVariable operator-(const RealVariable, const double);
        friend RealVariable operator-(const double, const RealVariable);
        friend RealVariable operator-(const RealVariable, const RealVariable);

        friend RealVariable operator+(const int, const RealVariable);
        friend RealVariable operator+(const RealVariable, const int);
        friend RealVariable operator+(const RealVariable, const double);
        friend RealVariable operator+(const double, const RealVariable);
        friend RealVariable operator+(const RealVariable, const RealVariable);

        friend RealVariable operator^(const RealVariable, const int);
        friend RealVariable operator^(const int, const RealVariable);

        friend RealVariable operator==(const RealVariable, const int);
        friend RealVariable operator==(const int, const RealVariable);
        friend RealVariable operator==(const RealVariable, const double);
        friend RealVariable operator==(const double, const RealVariable);
        friend RealVariable operator==(const RealVariable, const RealVariable);

        friend RealVariable operator/(const RealVariable, const double);
        friend RealVariable operator/(const RealVariable, const int);
        friend RealVariable operator/(const RealVariable, const RealVariable);

    };

    class ComplexVariable
    {
        public:

        ComplexVariable()
        {

        }

        friend ComplexVariable operator*(const int, const ComplexVariable);
        friend ComplexVariable operator*(const complex<double>, const ComplexVariable);

        friend ComplexVariable operator-(const ComplexVariable, const int);
        friend ComplexVariable operator-(const int, const ComplexVariable);
        friend ComplexVariable operator-(const complex<double>, const ComplexVariable);
        friend ComplexVariable operator-(const ComplexVariable, const ComplexVariable);
        friend ComplexVariable operator-(const ComplexVariable, const complex<double>);
        friend complex<double> operator-(const int, const complex<double>);

        friend ComplexVariable operator+(const int, const ComplexVariable);
        friend ComplexVariable operator+(const ComplexVariable, const int);
        friend ComplexVariable operator+(const ComplexVariable, const ComplexVariable);
        friend ComplexVariable operator+(const ComplexVariable, const complex<double>);
        friend ComplexVariable operator+(const complex<double>, const ComplexVariable);
        friend complex<double> operator+(const int, const complex<double>);

        friend ComplexVariable operator^(const ComplexVariable, const int);

        friend ComplexVariable operator==(const ComplexVariable, const int);
        friend ComplexVariable operator==(const int, const ComplexVariable);
        friend ComplexVariable operator==(const ComplexVariable, const ComplexVariable);
        friend ComplexVariable operator==(const ComplexVariable, const complex<double>);
        friend ComplexVariable operator==(const complex<double>, const ComplexVariable);

        friend ComplexVariable operator/(const ComplexVariable, const int);
        friend ComplexVariable operator/(const ComplexVariable, const complex<double>);
    };

    double solve(const RealVariable&);
    complex<double> solve(const ComplexVariable&);
    
};
