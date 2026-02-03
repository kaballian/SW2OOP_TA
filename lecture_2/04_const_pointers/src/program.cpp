#include "const_pointer_parameters.h"
int main()
{
	int i = 9;
	int j = 2;
	int* k = &i;
	const int* l = &i;
	*k = 10;
	l = &j;
	//*l = 16;// does not compile immutable 


	int* const m = &i;
	*m = 10;
	//m = &j; // does not compile m itself is immutable


	const int* const o = &i;
	//*o = 6;// does not compile immutable 
	//o = j;// does not compile o itself is immutable
	not_movable(&i, &j);

	return 0;
}
