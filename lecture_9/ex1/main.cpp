#include <iostream>
#include <iterator>
#include <vector>
#include "Person.h"
#include <deque>
#include <list>


#define ex_num 2

int main(void)
{
#if ex_num == 1
    std::vector<Person>Pvect;

    Pvect.assign(10,Person{20, "Alexander"});

    for(std::vector<Person>::iterator it = Pvect.begin(); it != Pvect.end(); it++)
    {
        std::cout << *it << "\n";
    }
    
#elif ex_num ==2

    
    Person P1{31, "max"};
    Person P2{32, "simon"};
    Person P3{33, "max"};
    std::vector<Person> Pvect2 = {P1, P2, P3};

    
    Person P4{34, "en ny person"};
    Pvect2.insert(Pvect2.begin(), P4); //trigers copy

    Person P5{123, "oasjnida"};
    Pvect2.emplace(Pvect2.begin(), P5);

    //in short vector does not work

    //deque does tho

    Person P6{4,"oaisjd"};
    Person P7{5,"asdasd"};
    Person P8{6,"plpaslda"};

    // std::deque<Person> Pdec;
    // Pdec.emplace_front(P6);



    std::list<Person> Plist;
    Plist.emplace_front(4, "alex");

   for(std::list<Person>::iterator it = Plist.begin(); it != Plist.end(); it++)
   {
    std::cout << *it << "\n";
   }

#endif
    return 1;
}