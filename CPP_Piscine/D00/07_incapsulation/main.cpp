#include <iostream>
#include "Sample.class.hpp"

int main() {

	Sample  instance;

	instance.publicFoo = 42;
	std::cout <<"instance.publicFoo: " << instance.publicFoo << std::endl;
	// instance.privateFoo_ = 42;
	// std::cout <<"instance.privateFoo_: " << instance.privateFoo_ << std::endl;

	instance.publicBar();
	// instance.privateBar_()

	return 0;
	
}