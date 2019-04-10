#include "phone.h"


namespace derivation_ex1{
Phone::Phone(){
    price = 0;
    date = "";
    brand = "";
}

Phone::Phone(const std::string & b, const std::string & d, const double & p){
    price = p;
    date = d;
    brand = b;
}

std::string Phone::get_date() const{
    return date;
}

double Phone::get_price() const{
    return price;
}

std::string Phone::get_brand() const{
    return brand;
}

void Phone::set_date(const std::string & d){
    date = d;
}

void Phone::set_price(const double & p){
    price = p;
}

void Phone::set_brand(const std::string & b){
    brand = b;
}
}

