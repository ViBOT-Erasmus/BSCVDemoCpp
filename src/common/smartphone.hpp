#ifndef SMARTPHONE_CPP
#define SMARTPHONE_CPP


#include "phone.hpp"
#include <string>

class Smartphone: public phone{
	public:
		Smartphone();
		void set_os(std::string);
		std::string get_os();
	private:
		std::string os;
};

#endif /* ifndef SMARTPHONE_CPP


#include "phone.hpp"

class Smartphone:phone{
	public :
		void get_os() */
