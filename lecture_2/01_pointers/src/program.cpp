#include <iostream>
using namespace std;

int main()//ExamplesLesson02/a_Pointers
{
	char c = 'q';
	char* p_c = &c;

	float f = 1.00;
	float* p_f = &f;

	cout << "An Ascii char takes up " << sizeof(c) << " bytes of space" << endl;
	cout << "A pointer to a char takes up " << sizeof(p_c) << " bytes of space" << endl;
	cout << endl;
	cout << "A float takes up " << sizeof(f) << " bytes of space" << endl;
	cout << "A pointer to a float takes up " << sizeof(p_f) << " bytes of space" << endl;
	
	


	return 0;
}
