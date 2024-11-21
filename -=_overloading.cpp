#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Overloading the -= operator
    Counter& operator-=(const Counter& other) {
        value -= other.value;  // Subtract values and store in 'this'
        return *this;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(15), c2(5);
    c1 -= c2;  // Subtract c2 from c1
    c1.display();  // Output: Value: 10
    return 0;
}
