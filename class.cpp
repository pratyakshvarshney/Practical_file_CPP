#include<iostream>
using namespace std;

class book{
    private:
        int book_no;
        string bname,aname;
        float bprice;
    public:
        void getdata(){
            cout<<"Enter details:"<<endl;
            cout<<"Enter book no: ";
            cin>>book_no;
            cout<<"Enter book name: ";
            cin>>bname;
            cout<<"Enter book author name: ";
            cin>>aname;
            cout<<"Enter price of book: ";
            cin>>bprice;
        }
        void display(){
            cout<<"Enter record is: "<<endl;
            cout<<"Book no. is:"<<book_no<<endl;
            cout<<"Book name is:"<<bname<<endl;
            cout<<"Book author name is:"<<aname<<endl;
            cout<<"Price of book is:"<<bprice;
        }
};

int main(){
    book b;
    b.getdata();
    b.display();
    
    return 0;
}
