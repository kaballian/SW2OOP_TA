#include <iostream>
using namespace std;

int main() //ExamplesLesson02/b_DataSizes
{
	char c = 'c'; float f = 1.0; double d = 1.0; bool b = false; int i = 2;
	cout << "An Ascii char takes up " << sizeof('c') << endl;
	cout << "A float takes up " << sizeof(f) << " bytes of space" << endl;
	cout << "A double takes up " << sizeof(d) << " bytes of space" << endl;
	cout << "An integer takes up " << sizeof(i) << " bytes of space" << endl;
	cout << "An boolean takes up " << sizeof(b) << " bytes of space" << endl;
	
	return 0;
}
