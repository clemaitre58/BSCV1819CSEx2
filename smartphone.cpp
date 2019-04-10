#include "smartphone.h"


namespace derivation_ex1{
SmartPhone::SmartPhone(){
    OS = "";
    brand = "";
    date = "";
    price = 0;

}

SmartPhone::SmartPhone(const std::string & b, const std::string & d, const double & p, const std::string & val_os){
    OS = val_os;
    brand = b;
    date = d;
    price = p;
}

void SmartPhone::set_os(const std::string & val_os){
    OS = val_os;
}

std::string SmartPhone::get_os() const{
    return OS;
}
}


