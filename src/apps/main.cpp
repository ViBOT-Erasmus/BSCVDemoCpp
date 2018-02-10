#include <iostream>

#include "complex.h"

int main() {

	// create, instanciate a complex object
	complex my_complex;
	std::cout << "real : " << my_complex.real << "\n";
	std::cout << "imag : "<< my_complex.imag << "\n";

	// custon corstructor
	
	float c = 2.9;
	float d = 1.34;
	complex my_complex2(c, d);
	std::cout << "real : " << my_complex2.real << "\n";
	std::cout << "imag : "<< my_complex2.imag << "\n";

	float m = my_complex2.modulus();
	std::cout << "Modulus of my_compex2 obj : " << m << "\n";

    return 0;
}
