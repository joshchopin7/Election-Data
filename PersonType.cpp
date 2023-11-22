#include<iostream>
#include<string>
#include"PersonType.h"

PersonType::PersonType()
{
	fName;
	lName;
	SSN = 0;
}

PersonType::PersonType(std::string newFirst, std::string newLast, int newSSN) //overloaded constructor
{
	fName = newFirst;
	lName = newLast;
	SSN = newSSN;
}


void PersonType::setPersonInfo(std::string newFirst, std::string newLast, int newSSN)
{
	fName = newFirst;
	lName = newLast;
	SSN = newSSN;
}



std::string PersonType::getFirstName() const
{
	return fName;
}



std::string PersonType::getLastName() const
{
	return lName;
}



int PersonType::getSSN() const
{
	return SSN;
}



void PersonType::printName() const
{
	std::cout << lName << ", " << fName;
}



void PersonType::printPersonInfo() const
{
	printSSN();
	std::cout << " " << fName << " " << lName;
}



void PersonType::printSSN() const
{
	std::string strSSN;
	strSSN = std::to_string(SSN);

	for (int i = 0; i < 9; i++)
	{
		if (i == 1 || i == 4)
		{
			std::cout << strSSN[i] << "-";
		}
		else
		{
			std::cout << strSSN[i];
		}
	}
}



PersonType::~PersonType()
{
	//leave it empty for now
}