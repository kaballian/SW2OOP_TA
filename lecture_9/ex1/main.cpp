#include <iostream>
#include <iterator>
#include <vector>
#include "Person.h"
#include <deque>
#include <list>
#include <set>
#include <map>
#define ex_num 4

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

#elif ex_num == 3

std::set<Person> Sperp;
//no copies, construct in place
   Sperp.emplace(1,"alex");
   Sperp.emplace(2,"simon");
   Sperp.emplace(4,"max");
   Sperp.emplace(3,"drazen");


   for(std::set<Person>::iterator it = Sperp.begin(); it != Sperp.end(); it++)
   {
    std::cout << *it << "\n";
   }

#elif ex_num == 4

   struct cat{
    int ear_tag;
    std::string name;
    std::string address;
   };

   std::map<int, cat> cats;

   cats.emplace(1, cat{20,"Boerge","stejlbjerg alle 27"});
   cats.emplace(2, cat{20,"cesare","stejlberjg alle 27"});
   cats.emplace(3, cat{20,"coco", "jels søndergade 21"});

   std::cout << cats[3].address << "\n";

   cats.erase(2);

   try
   {
    std::cout << cats.at(10).address << "\n";
   }
   catch(const std::out_of_range& e)
   {
    std::cout << "key 10 not found" << std::endl;
   }

   for(const auto& [key, value] : cats)
   {
    std::cout << value.name << std::endl;
   }


#endif
    return 1;
}