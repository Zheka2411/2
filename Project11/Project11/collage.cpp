#include "collage.h"

Collage::Collage(const std::string& name, Contact* contact)
    : name(new std::string(name)), contact(contact) {}

Collage::~Collage() {
    delete name;
    delete contact;
}

void Collage::Show() const {
    std::cout << "Collage Name: " << *name << std::endl;
    contact->Show();
}
