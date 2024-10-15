#include<iostream>
using namespace std;

class Student {
    private:
        int roll_no;
        string name;
        float marks;
    public:
        void getdata() {
            cout << "Enter student details:" << endl;
            cout << "Enter roll number: ";
            cin >> roll_no;
            cin.ignore(); // To ignore newline character after entering roll_no
            cout << "Enter student name: ";
            getline(cin, name); // To allow spaces in name
            cout << "Enter marks: ";
            cin >> marks;
        }
        void display() const {
            cout << "\nEntered record is: " << endl;
            cout << "Roll number: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    Student s;
    s.getdata();
    s.display();
    
    return 0;
}
