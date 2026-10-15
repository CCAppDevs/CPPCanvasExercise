#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    cout << "Welcome to Canvas CLI\n";
    
    Student person1("Jesse", "Harlan", 44);
    person1.hasRegistered = true;

    Student person2("Sarah", "Harlan", 40);
    person2.hasRegistered = true;
    
    Student person3("Ashton", "Harlan", 10);
    
    person1.PrintStudent();
    person2.PrintStudent();
    person3.PrintStudent();
}