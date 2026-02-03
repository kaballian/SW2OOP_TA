#include "pointers.h"

int main() {
    //pointer_to_array();
    int b[] = {3, 4, 5}; // b is of type int[3]
    cout << "before call by (pointer) reference " << b[2] << endl << endl;
    pass_and_change_an_array(b, 3);
    cout << "after call by (pointer) reference " << b[2] << endl;
    //pass_immutable_array(b, 3);
    //string s = "bytes";
    //pass_copy(s);
    //cout << s << endl;
    //string s = "bytes";
    //pass_by_pointer_reference(&s);
    //cout << s << endl;

    return 0;
}
