#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string b, string m, int y) {
        brand = b;   // assign parameter TO member
        model = m;
        year  = y;
    }

    void display_info() {    // no parameters needed
        cout << brand << endl;
        cout << model << endl;
        cout << year << endl;
    }
};

int main() {
    Car c1("Toyota", "Innova", 2020);  // pass values at creation
    c1.display_info();

    Car c2("Fiat", "Vow", 2025);
    c2.display_info();
}