#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H

// #include <std::string>


class PersonType
{
private:
    std::string fName;
    std::string lName;
    int SSN;

public:
        PersonType();
        PersonType(std::string, std::string, int);
        void setPersonInfo(std::string f, std::string l, int s);
        std::string getFirstName() const;
        std::string getLastName() const;
        int getSSN() const;
        void printName() const;
        void printInfo() const;
        void printSSN() const; // finish
        
        ~PersonType();
};

#endif 