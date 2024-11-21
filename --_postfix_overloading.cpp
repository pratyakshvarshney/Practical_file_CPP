#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Postfix -- operator overloading
    Counter operator--(int) {
        Counter temp = *this;
        --value;  // Decrement after returning the current object
        return temp;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);
    c--;  // Postfix decrement
    c.display();  // Output: Value: 4
    return 0;
}
