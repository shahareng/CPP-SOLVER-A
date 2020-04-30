/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Shahar Engel 318511375
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "solver.hpp"
#include <complex>
#include <iostream>

using namespace solver;
using namespace std;

ComplexVariable y;
RealVariable x;

TEST_CASE("Test Real operator*")
{
    CHECK(solve(x*1==3)==3);
    CHECK(solve(3*x==3)==1);
    CHECK(solve(x*1*3==3)==1);
    CHECK(solve(x*1.0==3)==3.0);
    CHECK(solve(3.0*x==3)==1.0);
}

TEST_CASE("Test Real operator+")
{
    CHECK(solve(x+1==3)==2);
    CHECK(solve(3+x==3)==0);
    CHECK(solve(x+1+3==10)==6);
    CHECK(solve(x+1.0==3)==2.0);
    CHECK(solve(3+x==3)==0.0);
    CHECK(solve(x+x==2)==1);
}

TEST_CASE("Test Real operator-")
{
    CHECK(solve(x-1==3)==4);
    CHECK(solve(6-x==3)==3);
    CHECK(solve(6-x-2==3)==1);
    CHECK(solve(x-1.0==3)==4.0);
    CHECK(solve(6.0-x==3)==3.0);
    CHECK(solve(2*x-x==2)==2);
}

TEST_CASE("Test Real operator/")
{
    CHECK(solve(x/4==2)==8);
    CHECK(solve(x/4.0==2)==8.0);
    CHECK(solve((x^2)/x==10)==10);
    CHECK_THROWS(solve(x/0==16));
}

TEST_CASE("Test Real operator==")
{
    CHECK(solve(x==2)==2);
    CHECK(solve(x==4.0)==4.0);
    CHECK(solve(2==x)==2);
    CHECK(solve(2.0==x)==2.0);
    CHECK_THROWS(solve(x==x)==2);
}

TEST_CASE("Test Real operator^")
{
    CHECK(solve((x^2)==16)==4);
    CHECK(solve((2^x)==2)==1);
    CHECK(solve((x^1)==0)==0);
    CHECK_THROWS(solve((x^0)==16));
}

TEST_CASE("Test Comp operator*")
{
    CHECK(solve(3*y==3)==(1.0,0.0));
    CHECK(solve(1*3*y==3)==(1.0,0.0));
    CHECK(solve((1.0,0.0)*y==3)==(3.0,0.0));
    CHECK(solve((3.0,3.0)*y==(6.0,6.0))==(2.0,0.0));
    CHECK(solve((3.0,3.0)*y==(12.0,0.0))==(2.0,-2.0));
}

TEST_CASE("Test Comp operator+")
{
    CHECK(solve(y+1==3)==(2.0,0.0));
    CHECK(solve(3+y==8)==(5.0,0.0));
    CHECK(solve(6+y+2==17)==(9.0,0.0));
    CHECK(solve(y+(1.0,0.0)==(3.0,2.0))==(2.0,2.0));
    CHECK(solve((6.0,5.0)+y==(6.0,7.0))==(0.0,2.0));
    CHECK(solve(2*y+y==6)==(2.0,0.0));
}

TEST_CASE("Test Comp operator-")
{
    CHECK(solve(y-1==3)==(4.0,0.0));
    CHECK(solve(6-y==3)==(3.0,0.0));
    CHECK(solve(6-y-2==3)==(1.0,0.0));
    CHECK(solve(y-(1.0,0.0)==(3.0,0.0))==(4.0,0.0));
    CHECK(solve((6.0,8.0)-y==(3.0,8.0))==(3.0,0.0));
    CHECK(solve(2*y-y==2)==(2.0,0.0));
    CHECK(solve(y-(1.0,0.0)==(3.0,0.0))==(4.0,0.0));
    CHECK(solve((6.0,-8.0)-y==(3.0,8.0))==(3.0,16.0));
}

TEST_CASE("Test Comp operator/")
{
    CHECK(solve(y/4==2)==(8.0,0.0));
    CHECK(solve(y/(4.0,0.0)==(2.0,0.0))==(8.0,0.0));
    CHECK(solve(y/(4.0,-2.0)==(2.0,0.0))==(8.0,-4.0));
    CHECK(solve(y/(5.0,0.0)==(2.0,0.0))==(10.0,0.0));
    CHECK_THROWS(solve(y/0==16));
}

TEST_CASE("Test Comp operator==")
{
    CHECK(solve(y==2)==(2.0,0.0));
    CHECK(solve(y==(4.0,9.0))==(4.0,9.0));
    CHECK(solve(2==y)==(2.0,0.0));
    CHECK(solve((5.0,19.0)==y)==(5.0,19.0));
    CHECK_THROWS(solve(y==y)==(2.0,0.0));
}

TEST_CASE("Test Comp operator^")
{
    CHECK(solve((y^2)==16)==(4.0,0.0));
    CHECK_THROWS(solve((y^0)==16));
}

//61

TEST_CASE("Test Real equations")
{
    CHECK(solve(2*x-4==10)==7);
    CHECK(((solve((x^2)==16)==4) || (solve((x^2)==16)==-4)));
    CHECK(((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4)));
    CHECK(solve(2*x-4.0 == 10.0)==7);
    CHECK(((solve((x^2)+5*x+6==0)==-3) || (solve(((x^2)+5*x+6)==0)==-2)));
    CHECK(solve(2*(x+3)-3*(x+2)==5-4*(x+1))==0.3333);
    CHECK(solve(2*x+5==7)==1);
    CHECK(solve(7*x==14)==2);
    CHECK(solve(x+4==2*x-7)==11);
    CHECK(solve(5*x-5==5)==4);
    CHECK(solve(3*x+8==-4*x-6)==2);
    CHECK(solve(3*x+3*x+12==18)==1);
}

TEST_CASE("Test Comp equations")
{
    CHECK(solve(2*y-4 == 10)==(7.0,0.0));
    CHECK(((solve((y^2) == 16)==(4.0,0.0)) || (solve((y^2) == 16)==(-4.0,0.0))));
    CHECK(((solve((y^2) == -16)==(0.0,4.0)) || (solve((y^2) == 16)==(0.0,-4.0))));
    CHECK(((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4.0,0.0)) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(-4.0,0.0))));
    CHECK(solve(y+(0.0,5.0) == 2*y+(0.0,3.0))==(0.0,2.0));
    CHECK(solve(2*y+5==7)==(1.0,0.0));
    CHECK(solve((7.0,2.0)*y==(31.0,-29.0))==(3.0,-5.0));
    CHECK(solve(y+4==2*y-7)==(11.0,0.0));
    CHECK(solve((5.0,5.0)*y-5==(0.0,-5.0))==(1.0,0.0));
    CHECK(solve((3.0,-2.0)*y+8==-9*y-(0.0,-14.0))==(1.0,-1.0));
    CHECK(solve((y^2)-(0.0,3.0)*y==18)==(0.0,1.0));
    CHECK(solve(-3*y+(0.0,8.0)==-5*y-6)==(-3.0,-4.0));
    CHECK(solve(2*y==(-4.0,-4.0))==(-2.0,-2.0));
}

TEST_CASE("Test throw Real equations")
{
    CHECK_THROWS(solve((x^2)==-8));
    CHECK_THROWS(solve((x^0)==16));
    CHECK_THROWS(solve(x==x));
    CHECK_THROWS(solve(x^3)+7*x-8==4);
    CHECK_THROWS(solve((x^4)==32));
    CHECK_THROWS(solve((x^5)+(x^4)-3*(x^4)+2==16-5*(x^5)));
    CHECK_THROWS(solve(3*x+(x^4)==9));
    CHECK_THROWS(solve(12*(x^0.5)+6==18));
}

TEST_CASE("Test throw Comp equations")
{
    CHECK_THROWS(solve((1.0,0.0)*(y^3)==(2.0,-2.0)));
    CHECK_THROWS(solve((3.0,-6.0)*(y^4)==(5.0,0.0)));
    CHECK_THROWS(solve(5-(5.0,8.0)*y==5*(y^5)));
    CHECK_THROWS(solve((3.0,2.0)*(y^4)==(7.0,0.0)));
    CHECK_THROWS(solve((2.0,0.0)*(y^5.8)==(2.0,-2.0)));
    CHECK_THROWS(solve(((2.0,4.0)*(y^3))==(7.0,0.0)));
    CHECK_THROWS(solve(5*(5.0,-7.0)==y));
    CHECK_THROWS(solve(3*y+(3.0,-4.0)==(y^4)));
}