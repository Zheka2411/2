#include "contact.h"

Contact::Contact(const std::string& phone, const std::string& city, const std::string& country)
    : phone(new std::string(phone)), city(new std::string(city)), country(new std::string(country)) {}

Contact::~Contact() {
    delete phone;
    delete city;
    delete country;
}

void Contact::Show() const {
    std::cout << "Phone: " << *phone << ", City: " << *city << ", Country: " << *country << std::endl;
}
