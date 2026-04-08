#include "Person.h"


std::ostream& operator<<(std::ostream& out, const Person& rhs)
{
    out << "Ssn:" << rhs.SSN_ << "Name:" << rhs.name;
    return out;
}