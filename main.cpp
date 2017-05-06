#include <iostream>

#include <DummyClass.hpp>

int main()
{
	std::cout << "This is main.cpp\n";
	const int* i = &src::DummyClass::var;
	auto imAuto = 12;
	std::cout << *i << std::endl;
	return 0;
}
