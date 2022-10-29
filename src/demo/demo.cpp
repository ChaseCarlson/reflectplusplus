// demo.cpp : Defines the entry point for the application.
//

#include "demo.h"
#include <iostream>
#include "reflectplusplus/property.h"

#include "A.h"
#include "B.h"

//static rpp::property<ExampleClass, int> prop_name();

int main()
{
	std::cout << B::get_type().get_name() << std::endl;
	std::cout << "Hello CMake." << std::endl;
	return 0;
}