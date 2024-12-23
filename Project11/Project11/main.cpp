#include <iostream>
#include "student.h"

int main() {
    Contact contact("123-456-7890", "Kyiv", "Ukraine");
    Collage collage("Kyiv University", &contact);
    Student student("Ivan Ivanov", "01.01.2000", &contact, &collage);

    student.Show();

    return 0;
}
