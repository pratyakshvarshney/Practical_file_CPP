#include<iostream>
using namespace std;

class circle{
    private:
        float radius;
    public:
        circle(){
        cout<<"Enter radius of the circle: \n";
        cin>>radius;
        }
        void area(){
            cout<<"Area of circle is: "<<3.14*radius*radius<<" sq. units\n";
        }
};

int main(){
    circle c;
    c.area();

    return 0;
}
