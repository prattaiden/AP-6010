//
//  Fractionhelp.cpp
//  ClassFraction
//
//  Created by Aiden Pratt on 9/15/23.
//

#include "Fractionhelp.hpp"
#include <cassert>

Fraction::Fraction()
{
    _denominator = 1;
    _numerator = 0;
    _realRepresentation = 0.0;
    _gcd = 1;
    _remainder = 0;
    _quotient = 0;
    
}

Fraction::Fraction(int numerator, int denomintor)
{
    assert(denomintor != 0 && "denomintor should not be zero");
    _numerator = numerator;
    _denominator = denomintor;
    simplify();
    
}

void Fraction::simplify()
{
    _gcd = std::gcd(_numerator, _denominator);
    assert(_gcd != 0 && "GCD is zero");
    _numerator /= _gcd;
    _denominator /= _gcd;
    _quotient = _numerator / _denominator;
    _remainder = _numerator % _denominator;
    _realRepresentation = static_cast<double> (_numerator) / _denominator;
}

//copy constructor
Fraction::Fraction(const Fraction& rhs)
{
    _denominator = rhs._denominator;
    _numerator = rhs._numerator;
    _realRepresentation = rhs._realRepresentation;
    _gcd = rhs._gcd;
    _remainder = rhs._remainder;
    _quotient = rhs._quotient;
}



//operators +
Fraction Fraction::operator+(const Fraction& rhs) const
{

    int resultNumerator, resultDenomintor;
    
    if(_denominator == rhs._denominator){
        resultDenomintor = _denominator;
        resultNumerator = _numerator + rhs._numerator;
    }
    else {
        resultDenomintor = _denominator * rhs._denominator;
        resultNumerator = _numerator*(rhs._denominator) + rhs._numerator*(_denominator);
    }
    
    
    //dont need simplify because it is in the Fraction constructor using here
    return Fraction(resultNumerator, resultDenomintor);
}

//opderator =

Fraction& Fraction::operator=(const Fraction& rhs)
{
    _denominator = rhs._denominator;
    _numerator = rhs._numerator;
    _realRepresentation = rhs._realRepresentation;
    _gcd = rhs._gcd;
    _remainder = rhs._remainder;
    _quotient = rhs._quotient;
    return *this;
    
}

Fraction Fraction::operator*(const Fraction& rhs) const
{
    int resultNumerator, resultDenomintor;
    
    resultDenomintor = _denominator * rhs._denominator;
    resultNumerator = _numerator * rhs._numerator;
    
    
    return Fraction(resultNumerator, resultDenomintor);
}

