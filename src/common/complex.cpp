# include "complex.hpp"

// default constructor
complex::complex(){
	real = 0.0f;
	imag = 0.0f;
	mod = 0.0f;
	ar  = 0.0f;
}

/// custom overloaded constructor
complex::complex(float & a, float & b){
	real = a;
	imag = b;
	mod = modulus();
	ar = arg();
}

// member function
float complex::modulus(){
	return std::sqrt(real * real + imag * imag);
}

float complex::arg(){
	float theta = 0.0;
	
	if( real != 0)
	{
		theta = std::atan(imag/real);
		if(real < 0){
			theta += PI;
		}
	}	
	else{
		if(imag> 0){
			theta = PI/2;
		}
		if(imag < 0){
			theta = PI/2 + PI;
		}
	}	
	return theta;
}

void complex::set_real(float r){
		real = r;
}
void complex::set_imag(float i){
		imag = i;
}
float complex::get_real(){
	return real;
}

float complex::get_imag(){
	return imag;

}

float complex::get_arg(){
	ar = arg();
	return ar;
}

float complex::get_mod(){
	mod = modulus();
	return mod;
}

void complex::clear_real(){
	real = 0.0;
}
