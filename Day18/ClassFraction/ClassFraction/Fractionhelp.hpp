//
//  Fractionhelp.hpp
//  ClassFraction
//
//  Created by Aiden Pratt on 9/15/23.
//

#ifndef Fractionhelp_hpp
#define Fractionhelp_hpp

#include <stdio.h>
#include <cassert>
#include <numeric>


class Fraction {
private:
    int _numerator, _denominator;
    double _realRepresentation;
    int _quotient, _remainder;
    int _gcd;


public:
    //CONSTRUCTORS
    Fraction();
    Fraction(const int numerator, const int denominator);
    Fraction(const Fraction& rhs);
    
    
    //takes in one because it is a method
    //const at end because it is not changing anything
    Fraction& operator=(const Fraction& rhs);
    
    bool operator==(const Fraction& rhs) const;
    Fraction operator+(const Fraction& rhs) const;
    Fraction operator-(const Fraction& rhs) const;
    Fraction operator*(const Fraction& rhs) const;
    
    void simplify();
    Fraction computeReciprocal();
    void computeQuotient();
    void computeRemainder();
    void printFraction();
    
};


#endif /* Fractionhelp_hpp */
