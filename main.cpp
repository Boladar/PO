#include <iostream>

#include "DatabaseCategory.h"
#include "VIP.h"
#include "Worker.h"
#include "Institution.h"
#include "National.h"
#include "Polish.h"
#include "Service.h"
#include "Educational.h"
#include "Private.h"
#include "Foreign.h"
#include "Enterprise.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    DatabaseCategory<Enterprise> enterprise;
    DatabaseCategory<Educational> educational;
    DatabaseCategory<Service> service;

    DatabaseCategory<Foreign> foreign = DatabaseCategory<Foreign>(enterprise);
    DatabaseCategory<Polish> polish = DatabaseCategory<Polish>(service,educational);

    DatabaseCategory<Private> privateInstitution = DatabaseCategory<Private>(foreign);
    DatabaseCategory<National> national = DatabaseCategory<National>(polish);

    DatabaseCategory<Institution> institution = DatabaseCategory<Institution>(national);

    DatabaseCategory<Worker> worker;
    DatabaseCategory<VIP> vip;

    DatabaseCategory<Person> person = DatabaseCategory<Person>(vip,worker);

    DatabaseCategory<DatabaseElement> element = DatabaseCategory<DatabaseElement>(person,institution);

    Category  &currentCategory = element;

    currentCategory.printChildren(0);

    return 0;
}