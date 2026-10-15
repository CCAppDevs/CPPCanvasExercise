#include "Student.h"

Student::Student(std::string fname, std::string lName, int age)
{
    this->firstName = fname;
    this->lastName = lName;
    this->age = age;
    this->hasRegistered = false;
    this->hasFinaid = false;
}

void Student::PrintStudent()
{
    std::cout << "---------------------------------\n";
    std::cout << "Full Name: " << this->GetFullName() << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Has Registered: " << hasRegistered << std::endl;
    std::cout << "Has Financial Aid: " << hasFinaid << std::endl;
    std::cout << "---------------------------------\n\n";
}

std::string Student::GetFullName()
{
    return this->firstName + " " + this->lastName;
}
