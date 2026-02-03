#include "address.h"
#include "syntax.h"
#include "call_and_return_by_reference.h"

int main() {
    syntax();
    //address();

    //heavy_object object(1, 2, 3);
    /*object.print();
    call_by_value(object, 1000);
    object.print();
    call_by_reference(object, 1000);
    object.print();
    */

    /*heavy_object object(1, 2, 3);
    heavy_object object_ret = call_by_reference_and_return_by_value(object, 20000);
    object_ret.print();// this is a copy of object
    object_ret.set_a(123123213);// change the copy
    object_ret.print();//print the copy
    object.print();// print the original*/

    /*
    heavy_object object(1, 2, 3);
    heavy_object& object_ret = call_and_return_by_reference(object, 20000);
    object_ret.print(); // this is a copy of object
    object_ret.set_a(123123213); // change the copy
    object.print(); // print the original1
    */

    //heavy_object object(1, 2, 3);
    //heavy_object &object_ret = return_internal_by_reference(20000);
    //object_ret.print(); // this is reference to a deallocated object

    //	int integer = 2;
    //	const int& integer_ref = integer;
    //	integer_ref = 6;// will not compile integer_ref being const


    //	integer = 6;
    return 0;
}
