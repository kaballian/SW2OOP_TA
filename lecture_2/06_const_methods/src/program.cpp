#include <iostream>

#include "../include/const_methods.h"

int main()
{
	const const_methods const_object{1, 2};
	const_methods object{1, 2};

	std::cout << const_object.get_a() << std::endl;
	object.set_a(3);
	//const_object.set_a(3);//will not compile const_object being const


	open open1(2);
	open1.print();
	//open1.get_a_open()=4;
	open1.print();
	return 0;
}
