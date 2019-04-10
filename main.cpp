#include <iostream>

// #include "phone.h"
#include "smartphone.h"



int main()
{
    derivation_ex1::SmartPhone iphone("apple", "2019", 1000, "iOS");
    std::cout << "OS of the smartphone : " << iphone.get_os() << std::endl;
    std::cout << "Price of the smartphone : " << iphone.get_price() << std::endl;
    return 0;
}

