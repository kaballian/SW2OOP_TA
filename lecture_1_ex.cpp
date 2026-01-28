#include <iostream>
#include <vector>
#include <numeric>

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

    int input = 0;
    
    std::cout << "enter a grade:" << std::endl;

    std::cin >> input;
    for(auto i : validGrades)
    {
        // std::cout << i << "\n";
        if(input == i)
        {
            std::cout << "grade not found" << std::endl;
            break;
        }

    }
    std::cout << std::endl;
    

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

}



int main(void)
{
    ex1();

    // std::cout << "hello world " << std::endl;
    return 1;
}