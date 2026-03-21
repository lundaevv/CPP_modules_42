#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->privateFoo_ = 0;
	std::cout << "this->privateFoo_: " << this->privateFoo_ << std::endl;

	this->publicBar();
	this->privateBar_();

	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::publicBar( void ) const {

	std::cout << "Member function publicBar called " << std::endl;
	return;
}

void	Sample::privateBar_( void ) const {

	std::cout << "Member function privateBar_ called " << std::endl;
	return;
}