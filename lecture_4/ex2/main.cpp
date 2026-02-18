#include <iostream>

#include <exception>

//Custom type
class DevError : public std::exception
{
    std::string mesg;
    public:
    explicit DevError(const std::string& msg) : mesg(msg){}

    const char* what() const noexcept override
    {
        return mesg.c_str();
    }
};

void connect_dev(bool success)
{
    if(!success)
        throw DevError("failed to connect");
}

int divide(int a, int b)
{
    if(b==0)
        throw std::runtime_error("division by zero");

    return a/b;
    
}

//multiple types
void check_age(int age)
{
    if (age < 0)
        throw std::invalid_argument("age cannot be negative");
    
    if (age<18)
        throw std::logic_error("must be adult");
        
    std::cout << "access granted" << std::endl;
}

//rethrow
void low_level()
{
    throw std::runtime_error("low level failture");
}
void high_level()
{
    try
    {
        low_level();
    }
    catch(...)  //catch all handler, cannoit acces the object tho.
    {
        std::cout << "logging error: " << std::endl;

    }   
}




//ex2.1


//ex2.2
double calculate_excp(double first, char sign, double second)
{
    if((sign != '+') || (sign != '-') ||(sign != '/') ||(sign != '*'))
        throw std::invalid_argument("sign invalid");
    
    if((sign != '/' )&& second == 0)
        throw std::runtime_error("division by 0, not possible");


    switch (sign)
    {
    case '+':
        return first + second;
    case '-':
        return first - second;
    case '*':
        return first * second;
    case '/':
        return first / second;
    default:
        throw std::logic_error("how did you get here?");
    }     
}


int main(void)
{

    try{
        std::cout << divide(10,2) << "\n";
        std::cout << divide (5,0) << "\n"; 
    }catch(const std::exception& e){
        std::cout << "error : " << e.what() << "\n";        
    }
    
    try{
        check_age(15);
        
    }catch(const std::invalid_argument& e)
    {
        std::cout << "invalid argument: " << e.what() << "\n";
    }
    catch(const std::logic_error& e)
    {
        std::cout << "logic error: " << e.what() << "\n";
    }

    try{
        connect_dev(false);
    }catch(const DevError& e)
    {
        std::cout << "device error: " << e.what() << "\n";
    }

    return 1;

}