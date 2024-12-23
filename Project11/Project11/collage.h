#pragma once
#ifndef COLLAGE_H
#define COLLAGE_H

#include <string>
#include <iostream>
#include "contact.h"

class Collage {
private:
    Contact* contact;
    std::string* name;

public:
    Collage(const std::string& name, Contact* contact);
    ~Collage();

    void Show() const;
};

#endif // COLLAGE_H

