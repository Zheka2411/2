#include "student.h"
Student::Student(const std::string& fullName, const std::string& birthDate, Contact* contact, Collage* collage)
    : fullName(new std::string(fullName)), birthDate(new std::string(birthDate)), contact(contact), collage(collage) {}

Student::~Student() {
    delete fullName;
    delete birthDate;
}

void Student::Show() const {
    std::cout << "Full Name: " << *fullName << ", Birth Date: " << *birthDate << std::endl;
    contact->Show();
    collage->Show();
}