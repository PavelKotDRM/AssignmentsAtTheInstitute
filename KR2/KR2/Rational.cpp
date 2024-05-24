#include "Rational.h"

unsigned int Rational::Nod(unsigned int a, unsigned int b)
{
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return Nod(a % b, b);
    return Nod(a, b % a);
}


Rational::Rational(Drob first, Drob sekond)
{
    one = first;
    two = sekond;
}

Rational::~Rational()
{

}

Drob Rational::summ()
{
    Drob tmp;
    tmp = one + two;
    unsigned int y = Nod(tmp.a, tmp.b);
    if (y != 1) {
        tmp.a = tmp.a / y;
        tmp.b = tmp.b / y;
    }
    return tmp;
}

Drob Rational::sub()
{
    Drob tmp;
    tmp = one - two;
    unsigned int y = Nod(tmp.a, tmp.b);
    if (y != 1) {
        tmp.a = tmp.a / y;
        tmp.b = tmp.b / y;
    }
    return tmp;
}

Drob Rational::mul()
{
    Drob tmp;
    tmp = one * two;
    unsigned int y = Nod(tmp.a, tmp.b);
    if (y != 1) {
        tmp.a = tmp.a / y;
        tmp.b = tmp.b / y;
    }
    return tmp;
}

Drob Rational::div()
{
    Drob tmp;
    tmp = one / two;
    unsigned int y = Nod(tmp.a, tmp.b);
    if (y != 1) {
        tmp.a = tmp.a / y;
        tmp.b = tmp.b / y;
    }
    return tmp;
}

