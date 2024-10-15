#include<iostream>
using namespace std;

class employee{
    private:
        int age;
        float salary;
        string name;
    public:
        employee(int a,float s,string n){
            age=a;
            salary=s;
            name=n;
        }
       void show(){
           cout<<"Name of employee is: "<<name<<endl;
           cout<<"Salary of employee is: "<<salary<<endl;
           cout<<"Age of employee is: "<<age<<endl;
       }
       ~employee(){
           cout<<"Object destroyed!! \n";
       }
};

int main(){
    employee e(18,2500,"RAJ");
    e.show();

    return 0;
}
