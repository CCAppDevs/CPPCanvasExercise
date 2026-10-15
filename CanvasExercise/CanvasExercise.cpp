#include <iostream>

using namespace std;

class Student
{
public:
    string firstName;
    string lastName;
    int age;
    // TODO: grades?
    bool hasRegistered;
    bool hasFinaid;

    // constructor - method that sets the class up for first use
    Student(string fname, string lName, int age)
    {
        this->firstName = fname;
        this->lastName = lName;
        this->age = age;
        this->hasRegistered = false;
        this->hasFinaid = false;
    }

    // function (METHOD)
    void PrintStudent()
    {
        cout << "---------------------------------\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Has Registered: " << hasRegistered << endl;
        cout << "Has Financial Aid: " << hasFinaid << endl;
        cout << "---------------------------------\n\n";
    }
};

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
