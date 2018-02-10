#ifndef Complex
#define Complex

#include <math.h>



class complex{
	// Member variable
	public:
		float real;
		float imag;
		// Member functions and methods
		float modulus();
		float arg();
		complex();
		complex(float &, float &);
};
#endif /* ifndef Complex */


