#pragma once
#include <string>
#include <iostream>

class Student
{
public:
    std::string firstName;
    std::string lastName;
    int age;
    // TODO: grades?
    bool hasRegistered;
    bool hasFinaid;

    // constructor - method that sets the class up for first use
    Student(std::string fname, std::string lName, int age);

    // function (METHOD)
    void PrintStudent();

    std::string GetFullName();
};

