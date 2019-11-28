#include <iostream>
#include <conio.h>

//HELLOW WORLD
int main()
{

	int *p = nullptr;
	int age[5] = { 1,2,3,4,5 };
	
	p = age;

	std::cout << *p << std::endl;

	p++;
	
	std::cout << *p << std::endl;
	
	std::cout << *(p+3) << std::endl;
	
	std::cout << *p << std::endl;

	

	_getch();
	return 0;
}