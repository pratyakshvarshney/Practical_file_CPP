#include<iostream>
using namespace std;

// Base class: Person
class Person {
    protected:
        string name;
        int age;
    public:
        // Constructor for Person class
        Person(string n, int a) {
            name = n;
            age = a;
            cout << "Person constructor  for: " << name << endl;
        }
        
        // Method to display person details
        void showPersonDetails() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
        
        // Destructor for Person class
        ~Person() {
            cout << "Person destructor  for: " << name << endl;
        }
};

// Derived class: Employee (inherits from Person)
class Employee : public Person {
    private:
        float salary;
    public:
        // Constructor for Employee class
        Employee(string n, int a, float s) : Person(n, a) {
            salary = s;
            cout << "Employee constructor  for: " << name << endl;
        }
        
        // Method to display employee details
        void showEmployeeDetails() {
            showPersonDetails(); // Calls base class method to display name and age
            cout << "Salary: " << salary << endl;
        }

        // Destructor for Employee class
        ~Employee() {
            cout << "Employee destructor  for: " << name << endl;
        }
};

int main() {
    // Creating an Employee object (inheriting from Person)
    cout << "Creating Employee object!\n";
    Employee e1("Jack", 30, 5000);
    
    // Displaying Employee details
    cout << "\nEmployee details:\n";
    e1.showEmployeeDetails();

    cout << "\nEnd of program\n";
    return 0;
}
