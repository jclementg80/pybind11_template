#include <iostream>
#include "mydate.hpp"

int main(int argc, char* argv[])
{
    MyDate mydate(2021, 4, 20);
    int a = 2, b = 2;
    std::cout << "My date is: " << mydate.getDay() << "/" << mydate.getMonth() << "/" << mydate.getYear() << "\r\n";
    std::cout << "My sum: " << a << " + " << b << " = " << MyDate_add(a, b) << "\r\n";
    return 0;
}
