# include "complex.h"

// default constructor
complex::complex(){
	real = 1;
	imag = 2;
}

/// custom overloaded constructor
complex::complex(float & a, float & b){
	real = a;
	imag = b;
}

// member function
float complex::modulus(){
	return std::sqrt(real * real + imag * imag);
}

float complex::arg(){
	return 0.0; 
		//std::atan(imag, real);
}


