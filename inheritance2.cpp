#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    string name;
    string company;
    int age;

    // Constructor
    Employee(string Name, string Company, int Age)
        : name(Name), company(Company), age(Age) {}

    // Function
    void display()
    {
        cout << "Name: " << name << endl
             << "Company: " << company << endl
             << "Age: " << age << endl;
    }
};

// Derived class
class Developer : public Employee
{
public:
    string favProgrammingLanguage;

    // Constructor (calls base class constructor)
    Developer(string Name, string Company, int Age, string FavProgrammingLanguage)
        : Employee(Name, Company, Age),
          favProgrammingLanguage(FavProgrammingLanguage) {}

    // Function
    void fixBug()
    {
        cout << name << " fixed bug using "
             << favProgrammingLanguage << endl;
    }
};

class Teacher : public Employee
{
public:
    string subject;

    // Constructor calls base class constructor
    Teacher(string Name, string Company, int Age, string Subject)
        : Employee(Name, Company, Age)
    {
        subject =Subject;
    }

    // Function
    void prepareLesson()
    {
        cout << name << " is preparing "
             << subject << " lesson." << endl;
    }
};

int main()
{
    // Create object of Developer
    Developer d("alice", "tech corp", 25, "C++");

    // Call functions
    d.display(); // inherited from Employee
    d.fixBug();  // Developer function
    // Create object of Teacher
    Teacher t("bob", "high school", 30, "Math");

    // Call functions
    t.display();       // inherited from Employee
    t.prepareLesson(); // Teacher function

    return 0;
}