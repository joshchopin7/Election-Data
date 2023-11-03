#include <iostream>
#include "persontype.h"

using namespace std;

PersonType::PersonType()
{
    fName;
    lName;
    SSN = 0;
}
PersonType::PersonType(string newFirst, string newLast, int newSSN)
{
    fName = newFirst;
    lName = newLast;
    SSN = newSSN;

}

void PersonType::setPersonInfo(string newFirst, string newLast, int newSSN)
{
    fName = newFirst;
    lName = newLast;
    SSN = newSSN;

}

string PersonType::getFirstName() const
{
    return fName;
}
string PersonType::getLastName() const
{
    string lastName;
    lastName = lName;
    return lastName;
}
int PersonType::getSSN() const
{
    int s;
    s = SSN;
    return s;
}

void PersonType::printName() const
{
    cout << lName << ", " << fName << endl;
}
void PersonType::printInfo() const
{
    printSSN();
    cout << " " << fName << " " << lName << endl;
}
void PersonType::printSSN() const
{
    string strSSN = to_string(SSN);

    for (int i = 0; i < 9; i++)
    {
        if (i == 2 || i == 4)
        {
            cout << strSSN[i] << "-";
        }
        else 
        {
            cout << strSSN[i];
        }
    }
}

PersonType::~PersonType()
{    
}

