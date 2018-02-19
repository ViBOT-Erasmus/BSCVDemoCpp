#include <iostream>

#include "complex.hpp"

int main() {

	// create, instanciate a complex object
	complex my_complex;
	my_complex.set_imag(1.2789);

	std::cout << "real : " << my_complex.get_real() << "\n";
	std::cout << "imag : "<< my_complex.get_imag()<< "\n";

	// custon corstructor
	
	float c = 2.9;
	float d = 1.34;
	complex my_complex2(c, d);
	std::cout << "real : " << my_complex2.get_real()<< "\n";
	std::cout << "imag : "<< my_complex2.get_imag()<< "\n";

	float m = my_complex2.get_mod();
	std::cout << "Modulus of my_compex2 obj : " << m << "\n";
	
	float a = my_complex2.get_arg();
	std::cout << "Arg of my_compex2 obj : " << a << "\n";
    return 0;
}
