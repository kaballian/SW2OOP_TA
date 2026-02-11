#include <iostream>
#include "Display.h"
#include <thread>
#include <chrono>
#include <conio.h>
#include "NumberDispenser.h"
#include "Counter.h"
#include "Product_catalog.h"    
#include "Order_line.h"



using namespace std;

int main() {
    cout << "Hit 'n' to draw a number." << endl;
    cout << "Hit '1' for new customer at counter 1." << endl;
    cout << "Hit '2' for new customer at counter 2." << endl;
    cout << "Hit '3' for new customer at counter 3." << endl;
    cout << "Hit 'q' to quit.\n\n\n\n\n";


    char key;
    cout.flush();
    do {
        key = _getch();
        cout << key;
        switch (key) {
            case '1':

                break;
            case '2':

                break;
            case '3':

                break;
            case 'n':

                break;
            default:
                cout << "Not valid button";
        }
    } while (key != 'q' && key != 'Q');


    return 0;
}
