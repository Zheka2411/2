#pragma once
#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact {
private:
    std::string* phone;
    std::string* city;
    std::string* country;

public:
    Contact(const std::string& phone, const std::string& city, const std::string& country);
    ~Contact();

    void Show() const;
};

#endif // CONTACT_H
