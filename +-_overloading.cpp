#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Overloading the += operator
    Counter& operator+=(const Counter& other) {
        value += other.value;  // Add values and store in 'this'
        return *this;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(5), c2(10);
    c1 += c2;  // Add c2 to c1
    c1.display();  // Output: Value: 15
    return 0;
}
