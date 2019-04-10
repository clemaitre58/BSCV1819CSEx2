#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include <string>
#include "phone.h"

namespace derivation_ex1{
class SmartPhone : public Phone{
public:
    SmartPhone();
    SmartPhone(const std::string &, const std::string &, const double &, const std::string &);
    void set_os(const std::string &);
    std::string get_os() const;

private:
    std::string OS;
};
}
#endif // SMARTPHONE_H
