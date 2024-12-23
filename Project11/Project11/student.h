#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include "contact.h"
#include "collage.h"

class Student {
private:
    std::string* fullName;
    std::string* birthDate;
    Contact* contact;
    Collage* collage;

public:
    Student(const std::string& fullName, const std::string& birthDate, Contact* contact, Collage* collage);
    ~Student();

    void Show() const;
};

#endif // STUDENT_H

