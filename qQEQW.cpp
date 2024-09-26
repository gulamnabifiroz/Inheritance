#include <iostream>
#include <string>
using namespace std;

// Parent Class-1
class Vehicle {
    public:
        string company = "Ford";
        void type() {
            cout << "Mustang" << endl;
        }
};

// Parent Class-2
class Specs {
    public:
        string mileage = "8 kmpl";
        void colour() {
            cout << "Grey" << endl;
        }
};

// Child Class-1 (derived from parent-1 & 2)
class Car : public Vehicle, public Specs {
    public:
        string seater = "4 seater";
};

int main() {
    // Multiple Inheritance
    Car f2;
    f2.colour();  // Outputs the color of the car
    cout << f2.company << " ";  // Outputs the company name
    f2.type();  // Outputs the type of the car
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;  // Outputs seating capacity and mileage

    return 0;
}


