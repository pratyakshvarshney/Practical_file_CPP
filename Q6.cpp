#include<iostream>
using namespace std;

class employee{
    private:
        int age;
        float salary;
        string name;
    public:
        // Constructor
        employee(int a, float s, string n) {
            age = a;
            salary = s;
            name = n;
            cout << "Constructor called for : " << name << endl;
        }
        
        // Method to display employee details
        void show() {
            cout << "Name of employee: " << name << endl;
            cout << "Salary is: " << salary << endl;
            cout << "Age is: " << age << endl;
        }

        // Destructor
        ~employee() {
            cout << "Destructor called for : " << name << endl;
        }
};

int main() {
    // Object 1 creation
    cout << "Creating object 1\n";
    employee e1(18, 2500, "RAJ");
    e1.show();

    // Object 2 creation
    cout << "\nCreating object 2\n";
    employee e2(22, 3500, "ANIL");
    e2.show();

    cout << "\nEnd of main function\n";
    return 0;
}
