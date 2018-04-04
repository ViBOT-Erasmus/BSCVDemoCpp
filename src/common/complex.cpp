// Copyright 2018 Cédric Lemaitre
#include "complex.hpp"

// default constructor
complex::complex() {
    real = 0.0f;
    imag = 0.0f;
    mod = 0.0f;
    ar  = 0.0f;
}

/// custom overloaded constructor
complex::complex(float & a, float & b) {
    real = a;
    imag = b;
    mod = modulus();
    ar = arg();
}

// member function
float complex::modulus() {
    return std::sqrt(real * real + imag * imag);
}

float complex::arg() {
    float theta = 0.0;

    if (real != 0) {
        theta = std::atan(imag/real);
        if (real < 0) {
          theta += PI;
        }
    } else {
        if (imag> 0) {
            theta = PI/2;
        }
        if (imag < 0) {
            theta = PI/2 + PI;
        }
    }
    return theta;
}

void complex::set_real(float r) {
    real = r;
}
void complex::set_imag(float i) {
    imag = i;
}
float complex::get_real() const {
    return real;
}

float complex::get_imag() const {
    return imag;
}

float complex::get_arg() {
    ar = arg();
    return ar;
}

float complex::get_mod() {
    mod = modulus();
    return mod;
}

void complex::clear_real() {
    real = 0.0;
}

/// overloading "+" operator for complex
//  a + b <=> ar+br + i(ai+bi)
//  parameters :
//      a : operande number 1
//      b : operande number 2
//
//  return :
//      comlex : result of addititon
complex operator+(const complex & a, const complex & b) {
    complex result;
    result.set_real(a.get_real() + b.get_real());
    result.set_imag(a.get_imag() + b.get_imag());

    return result;
}  //  operator+


/// overloading "-" operator for complex
//  a - b <=> ar-br + i(ai-bi)
//  parameters :
//      a : operande number 1
//      b : operande number 2
//
//  return :
//      comlex : result of substraction
complex operator-(const complex & a, const complex & b) {
    complex result;
    result.set_real(a.get_real() - b.get_real());
    result.set_imag(a.get_imag() - b.get_imag());

    return result;
}  // operator-

/// overloading "*" operator for complex
//  a - b <=> arbr-aibi + i(aibr+biar)
//  parameters :
//      a : operande number 1
//      b : operande number 2
//
//  return :
//      comlex : result of multiplication
complex operator*(const complex & a, const complex & b) {
    complex result;
    result.set_real((a.get_real() * b.get_real()) -
            (a.get_imag() * b.get_imag()));

    result.set_imag((a.get_real() * b.get_imag()) +
            (a.get_imag() * b.get_real()));

    return result;
}  // operator*
