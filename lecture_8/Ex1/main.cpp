#include <iostream>
#include <vector>
#include "Max.h"
#include "Exists.h"
#include "Person.h"
#include "string"
#include "dyn_array.h"
#include "set.h"
#include "cust_type.h"
#define OPG_NR 5




int main(void)
{

    #if OPG_NR == 1
        std::vector<float> w = {1.2,3.4,23,42.1,52.2,4.3,5,6,7,5};
        std::cout << max(w) << std::endl;
        std::vector<int> w2 = {};
        try{
            std::cout << max(w2) << std::endl;
        }catch (std::out_of_range &e)
        {
            std::cout << e.what() << std::endl;
        }

        
        if(exists(w, (float)3.4))
        {
            std::cout << "exists" << std::endl;
        }else{
            std::cout << "does not exists" << std::endl;
        }
    #elif OPG_NR == 2
    
        Person p1 {"Alex", 32, 320}; 
        Person p2 {"simon", 32, 420}; 
        Person p3 {"max", 31, 1200};
        Person p4 {"jakob", 26, 141};

        std::vector<Person> ps = {
            p1,p2,p3
        };

        std::cout << p1.to_string() << std::endl;
        std::cout << p2.to_string() << std::endl;
        std::cout << p3.to_string() << std::endl;
        std::cout << p4.to_string() << std::endl;
        
        if(exists(ps, p4))
        {
            std::cout << "person exists" << std::endl;
        }else{
            std::cout << "person does not exists" << std::endl;
        }

    #elif OPG_NR == 3
    
    #elif OPG_NR == 4
        Person p1 {"Alex", 32, 320}; 
        Person p2 {"simon", 32, 420}; 
        Person p3 {"max", 31, 1200};
        Person p4 {"jakob", 26, 141};

        std::cout << "\n --- test array --- \n" << std::endl;
        dyn_array<Person> arr(10,1);

        arr.add(p1);
        arr.add(p2);
        arr.add(p3);
        arr.add(p4);

        for(int i = 0 ; i < arr.get_size(); i++)
        {
            std::cout << "person: " << arr.get(i).to_string() << std::endl;
        }

        dyn_array<int> arr2(5,2);
        std::cout << "\n --- test 2 --- \n" << std::endl;
        


    #elif OPG_NR == 5
        
        CUST_TYPE t1;
        CUST_TYPE t2(520, 1119);

        Set<CUST_TYPE> s1;
        s1.push_back(t1);
        s1.push_back(t2);

        for(int i = 0; i < s1.size(); i++)
        {
            
            std::cout << s1[i].to_string() << std::endl;
        }

    #endif

 
    return 1;
}


/*hvis nogen spørg om hvorfor en template skal være i header
suppose vi har 

template<typename T> t add(T a, T b)  (i .h)
og
template<typename T> 
t add(T a, T b) { return a + b;}


i main

int x = add(2,3)
compileren ser add<T> declared og ser add(2,3),
så den indster at det er add<int>, på det tidspunkt
kan den ikke instantiere add<int> fordi at den fulde
definition ikke er synlig. den ved kun at templated findes
men ikke hvordan den virker


ved normale funktioner, compileren compiles implementation
separat. Linkeren sampler det hele bagefter

for templates, skal compileren have den fulde definiton før
linkeren går i gang, fordi at compileren skal vide
hvordan add<int> ser ud så den kan compileren den spicifikke version

så det er ikke linker problem, men et compile-time visiblity problem

*/