#include <iostream>
using namespace std;

class stds{
    int roll;
    public:
        stds(int r):roll(r){}
        void attendance(){
            cout<<roll<<" Present\n";
        }
};

class proxy{
    int roll_no;
    static int roll;
    stds *s;
    public:
        proxy(){
            roll_no = roll++;
            s = 0;
        }
        void pattend(){
            if(s == 0){
                s = new stds(roll_no);
            }
            s->attendance();
        }
};

int proxy :: roll = 1;
int main(){
    proxy p[60];
    int r;
    cout<<"Enter roll no. (1-60):\n";
    cin>>r;
    if(r == 0){}
    else{
        p[r-1].pattend();
    }
    cout<<"hello\n";
    
    return 0;
}
