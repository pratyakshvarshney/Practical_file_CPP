#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Prefix -- operator overloading
    Counter& operator--() {
        --value;  // Decrement before returning
        return *this;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);
    --c;  // Prefix decrement
    c.display();  // Output: Value: 4
    return 0;
}
