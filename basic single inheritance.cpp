#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    // Constructor
    Person(string personName)
    {
        name = personName;
    }

    // Function to display name
    void displayName() const
    {
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Student : public Person
{
private:
    int rollNumber;

public:
    // Constructor
    Student(string studentName, int roll)
        : Person(studentName)
    {
        rollNumber = roll;
    }

    // Function to display student details
    void displayStudent() const
    {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    // Creating Student object
    Student student("Amit", 101);

    // Display student details
    student.displayStudent();

    return 0;
