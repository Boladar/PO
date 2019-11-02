#include <iostream>

#include "DatabaseCategory.h"
#include "VIP.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    VIP v = VIP(1,1,"huba","buba",2,"porshe");
    DatabaseCategory<Person> people = DatabaseCategory<Person>( v);
    people.Print();

    return 0;
}