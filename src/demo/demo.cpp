// demo.cpp : Defines the entry point for the application.
//

#include "demo.h"
#include <iostream>
#include "reflectplusplus/type.h"

#include "A.h"
#include "B.h"

int main()
{
	B b;
	A* a = &b;
	std::cout << a->get_type().get_name() << std::endl;
	std::cout << "reflectplusplus demo!" << std::endl;
	return 0;
}