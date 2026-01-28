#include <iostream>
#include <vector>
#include <numeric>
#include "Person.h"
#include <iterator>


/*
    1. Use list initializers
    2. Use for range if possible
    3. Use auto if this is convenient
    4. Use [[nodiscard]] if desired
 */
template<class T>
auto sum_func(std::vector<T> in)
{
    return std::accumulate(in.begin(), in.end(),0);
}
template<class T>
auto avg_func(std::vector<T> in_vect, T in_sum)
{
    return in_sum/in_vect.size();
}


void ex1(void)
{
    int validGrades[] = {-03,0,2,4,7,10,12};

    // int input = 0;
    
    // std::cout << "enter a grade:" << std::endl;

    // std::cin >> input;
    // for(auto i : validGrades)
    // {
    //     // std::cout << i << "\n";
    //     if(input == i)
    //     {
    //         std::cout << "grade not found" << std::endl;
    //         break;
    //     }

    // }
    // std::cout << std::endl;
    

    std::vector<int> grades;
    int input2{0};
    bool running = true;
    bool contains = false;
    while(running)
    {
        std::cout << "enter grades:" << std::endl;
        std::cin >>input2;
        if(input2 == -99)
        {
            break;
        }else{
            for(auto i : validGrades)
            {
                if(i == input2)
                {
                    contains = true;
                    break;   
                }
            }
            if(contains)
            {
                grades.push_back(input2);
                contains = false;
            }
        }
        //calc/print
        // auto sum = std::accumulate(grades.begin(), grades.end(),0);
        auto sum = sum_func(grades);
        for(auto k : grades)
        {
            std::cout << k << "\n";
        }
        std::cout <<"sum: " << sum << std::endl;
        // auto avg = sum / grades.size();
        auto avg = avg_func(grades, sum);
        std::cout <<"avg: "<< avg << std::endl; 
    }
}
//ex2
void writeArray(int* const a, const size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        std::cout << *a << "\n" << std::endl;
    }
}
void swap(int* a, int* b)
{
    //3 liner
    int *temp = a;
    b = a;
    a = temp; 
}
void increment(int* const a, const int incr, const size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        a[i] += incr;
    }
}
//ex2
float calcAvg_Iter(std::vector<Person*> &input_vect)
{
    auto sum = 0;
    
    std::vector<Person*>::iterator it;
    for(it = input_vect.begin(); it != input_vect.end(); ++it)
    {
        sum += (*it)->getAge();
    }
    auto avg = sum / input_vect.size();
    return avg;
}
float calcAvg_nonIter(std::vector<Person*> &input_vect)
{
    auto sum = 0;
    for(auto i : input_vect)
    {
        sum += i->getAge();
    }
    auto avg = sum / input_vect.size();
    return avg;
}

//ex3
void ex3(void)
{
    //1
    Person p1, p2, p3, p4, p5;  //implicit no-arg invocation of constructor
    //2
    std::vector<Person*> persons;
    //3
    persons.push_back(&p1);
    persons.push_back(&p2);
    persons.push_back(&p3);
    persons.push_back(&p4);
    persons.push_back(&p5);
    //4 / 5
    auto res1 = calcAvg_Iter(persons);
    auto res2 = calcAvg_nonIter(persons);


    //6 (3)
    Person p6, p7, p8;
    const size_t arrSize = 3;
    Person*perArr[arrSize] = {
        &p6,
        &p7,
        &p8};
    



}
int main(void)
{
    ex1();
    ex3();

    
    return 1;
}