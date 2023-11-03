#include <iostream>
#include <string>
#include "persontype.h"

using namespace std;

int main()
{
    PersonType p1;

    p1.setPersonInfo("Josh", "Chopin", 123456789);

    // cout << p1.getFirstName() << endl;
    // cout << p1.getLastName() << endl;
    // cout << p1.getSSN() << endl;

    p1.printName();
    p1.printInfo();
    p1.printSSN();


    return 0;
}