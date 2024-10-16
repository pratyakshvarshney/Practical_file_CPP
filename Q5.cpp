#include<iostream>
using namespace std;

// Define a custom namespace
namespace StudentInfo {
    class Student {
        private:
            int roll_no;
            string name;
            float marks;
        public:
            void getdata() {
                cout << "Enter student details:" << endl;
                cout << "Enter roll no. : ";
                cin >> roll_no;
                // Removing the ignore function to keep it simple
                cout << "Enter student name: ";
                cin >> name; // This will take input until the first space (no spaces allowed)
                cout << "Enter marks: ";
                cin >> marks;
            }
            void display() {
                cout << "\nEntered record is: " << endl;
                cout << "Roll no. : " << roll_no << endl;
                cout << "Name: " << name << endl;
                cout << "Marks: " << marks << endl;
            }
    };
}

int main() {
    // Create a Student object using the custom namespace
    StudentInfo::Student s;
    s.getdata();
    s.display();
    
    return 0;
}
