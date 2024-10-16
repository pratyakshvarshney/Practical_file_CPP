#include <iostream>
using namespace std;

class Car {
    private:
        string color;
        string brand;
        int price;

    public:
        // Parameterized constructor
        Car(string c, string b, double p) {
            color = c;
            brand = b;
            price = p;
        }

        // Copy constructor
        Car(const Car &c) {
            color = c.color;
            brand = c.brand;
            price = c.price;
        }

        // Method to display car details
        void display() {
            cout << "Color: " << color << endl;
            cout << "Brand: " << brand << endl;
            cout << "Price: ₹" << price << endl;
        }
};

int main() {
    // Create an instance of Car
    Car car1("Red", "Toyota", 1600000);

    // Use the copy constructor to create a new instance
    Car car2 = car1;

    cout << "Details of car 1:" << endl;
    car1.display();

    cout << "Details of car 2 (copy of car 1):" << endl;
    car2.display();

    return 0;
}
