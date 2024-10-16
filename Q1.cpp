#include <iostream>
using namespace std;

class Sample{
    public:
        Sample(){
            cout<<"Constructor Called!"<<endl;
        }
        ~Sample(){
            cout<<"Destructor Called!"<<endl;
        }
};

int main(){
    Sample obj;
    
    return 0;
}
