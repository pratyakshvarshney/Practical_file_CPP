#include <iostream>
using namespace std;

class Book{
    private: 
        string title;
    public:
        Book(string t){
            title=t;
        }
        Book(Book &t){
            title=t.title;
        }
        void display(){
            cout<<"Title: "<<title<<endl;
        }
};

int main(){
    Book b1("Rich Dad Poor Dad");
    Book b2=b1;
    
    b1.display();
    b2.display();
    
    return 0;
}
