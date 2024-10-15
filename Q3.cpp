#include <iostream>
using namespace std;

class Rectangle{
    private: 
        float width,height;
    public:
        Rectangle(float w,float h){
            width=w;
            height=h;
        }
        float area(){
            return width*height;
        }
};

int main(){
    Rectangle r(5.0,7.0);
    cout<<"Area: "<<r.area()<<endl;
    
    return 0;
}
