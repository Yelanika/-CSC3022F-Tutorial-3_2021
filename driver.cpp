#include <iostream>


int main(void)
{
	
	int a = 10;
	float b = 15.5;

	int *p1 = &a;
	float *p2 = &b;

	std::cout << "The address of variable 'a' is: " << &a << std::endl;
	std::cout << "The value of variable 'p1' is: " << p1 << std::endl;

	std::cout << "The address of variable 'b' is: " << &b << std::endl;
	std::cout << "The address of varialbe 'p2' is: " << p2 << std::endl;

	return 0;
}