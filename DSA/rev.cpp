// #include <iostream>
// using namespace std;

// class Car {
// public:
//     string brand;
//     string model;
//     int year;

//     Car(string b, string m, int y) {
//         brand = b;   // assign parameter TO member
//         model = m;
//         year  = y;
//     }

//     void display_info() {    // no parameters needed
//         cout << brand << endl;
//         cout << model << endl;
//         cout << year << endl;
//     }
// };

// int main() {
//     Car c1("Toyota", "Innova", 2020);  // pass values at creation
//     c1.display_info();

//     Car c2("Fiat", "Vow", 2025);
//     c2.display_info();
// }

// #include <iostream>
// using namespace std;
// #include <string>

// class BankAccount{
//     private:
//        int __balance = 0;

//     public:
//         int amount;
        

//         void deposit(int amount){
//             this->__balance = this->__balance + amount;
//         }

//         void withdraw(int amount){
//             this->__balance =this->__balance - amount;
//         }

//         void get_balance(){
//             if (__balance<0)
//             {
//                 /* code */
//                 cout << "invalid amount";
//             }
//             else{
//                 cout<< __balance;
//             }
            
//         }
// };

// int main(){

//     BankAccount b1;

//     b1.deposit(7000);
//     b1.withdraw(2000);
//     b1.get_balance();

// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Some generic sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() {           // overrides parent
//         cout << "Woof!" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void speak() {           // overrides parent
//         cout << "Meow!" << endl;
//     }
// };

// int main() {
//     Dog d1;
//     d1.speak();    // prints Woof!

//     Cat c1;
//     c1.speak();    // prints Meow!
// }

// #include <iostream>
// using namespace std;

// #include <iostream>
// #include <string>
// using namespace std;

// class Animal {
// public:
//     virtual void speak() {
//         cout << "Some generic sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() override {
//         cout << "Woof!" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void speak() override {
//         cout << "Meow!" << endl;
//     }
// };

// void make_sound(Animal &animal) {
//     animal.speak();
// }

// int main() {
//     Dog d1;
//     Cat c1;

//     make_sound(d1);   // prints Woof!
//     make_sound(c1);   // prints Meow!
// }

#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void area() = 0;

};

class Circle : public Shape{

    public:
        void area() override {
            float r = 5;
            cout << "Area of circle:" << 3.14 * r * r << endl;
        }

};

class Rectangle : public Shape{
    public:
        void area() override {
            float length = 10;
            float width = 5;
            cout<< "Area of rectangle:"<< length * width << endl;
        }
};

int main(){

    Circle c1;
    Rectangle r1;

    c1.area();
    r1.area();

}