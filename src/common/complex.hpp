#ifndef SRC_COMMON_COMPLEX_HPP_
#define SRC_COMMON_COMPLEX_HPP_

// "Copyright [2017] <Copyright Cedric Lemaitre>"

#include <cmath>

#include <iostream>

#define PI 3.14159265

class complex {
 private:
        float real;
        float imag;
        float mod;
        float ar;
        float modulus();
        float arg();
 public:
        complex();
        complex(float &, float &);
        void set_real(float);
        void set_imag(float);
        float get_real() const;
        float get_imag() const;
        float get_mod();
        float get_arg();
        void clear_real();
};  //  Class Complex

complex operator+(const complex &, const complex &);
complex operator-(const complex &, const complex &);
complex operator*(const complex &, const complex &);
complex operator/(const complex &, const complex &);
std::ostream & operator<<(std::ostream &, const complex &);
#endif  //  SRC_COMMON_COMPLEX_HPP_
