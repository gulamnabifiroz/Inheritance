#include <iostream>
#include <string>
using namespace std;

// Parent Class-1
class Food {
    public:
        string cuisine = "Indian";
        void type() {
            cout << "Asian" << endl;
        }
};

// Child Class-1 (derived from parent-1)
class Dish : public Food {
    public:
        string dish = "Biryani";
};

// Child Class-2 (derived from child-1)
class Restaurant : public Dish {
    public:
        string name = "Spice Kitchen";
};

int main() {
    // Multilevel Inheritance
    Restaurant f3;
    f3.type();  // Outputs the type of cuisine
    cout << f3.cuisine << ": " << f3.dish << endl;  // Outputs the cuisine and dish
    cout << "Restaurant: " << f3.name << endl;  // Outputs the restaurant name

    return 0;
}

