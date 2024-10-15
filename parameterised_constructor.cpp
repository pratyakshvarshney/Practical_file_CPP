#include<iostream>
using namespace std;

class student{
    private:
        int roll_no,age,marks;
    public:
        student(int x,int y,int z){
            roll_no=x;
            age=y;
            marks=z;
        }
        void display(){
            cout<<"Roll No. is:"<<roll_no<<endl;
            cout<<"Age is:"<<age<<endl;
            cout<<"Marks is:"<<marks<<endl;
        }
};

int main(){
    student raj(102,18,100);
    student prateek(101,19,86);
    cout<<"Details of student 1 is: \n";
    raj.display();
    cout<<"Details of student 2 is: \n";
    prateek.display();
}
