#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include<string>

class PersonType
{

private:
	std::string fName;
	std::string lName;
	int SSN;

public:
	PersonType();
	
	PersonType(std::string newFirst, std::string newLast, int newSSN);

	//Setters & Mutators
	void setPersonInfo(std::string newFirst, std::string newLast, int newSSN);	
	
	//Accessors, Getters
	std::string getFirstName() const;	
	std::string getLastName() const;
	int getSSN() const;

	void printName() const;
	void printPersonInfo() const;
	void printSSN() const;
	
	// Destructors
	~PersonType();

};


#endif