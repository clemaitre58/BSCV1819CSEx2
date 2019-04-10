#ifndef PHONE_H
#define PHONE_H

#include <string>

namespace derivation_ex1{
class Phone
{
public:
    Phone();
    Phone(const std::string &, const std::string &, const double &);
    std::string get_date() const;
    double get_price() const;
    std::string get_brand() const;

    void set_date(const std::string &);
    void set_price(const double &);
    void set_brand(const std::string &);

protected:
    std::string date;
    double price;
    std::string brand;
};
}

#endif // PHONE_H
