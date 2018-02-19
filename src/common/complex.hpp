#ifndef Complex
#define Complex

#include <cmath>



class complex{
	// Member variable
	private:
		float real;
		float imag;
		float mod;
		float ar;
		// Member functions and methods
		float modulus();
		float arg();
	public:
		complex();
		complex(float &, float &);
		void set_real(float);
		void set_imag(float);
		float get_real();
		float get_imag();
		float get_mod();
		float get_arg();
};
#endif /* ifndef Complex */


