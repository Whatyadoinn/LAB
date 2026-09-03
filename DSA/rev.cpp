// // #include <iostream>
// // using namespace std;

// // class Car {
// // public:
// //     string brand;
// //     string model;
// //     int year;

// //     Car(string b, string m, int y) {
// //         brand = b;   // assign parameter TO member
// //         model = m;
// //         year  = y;
// //     }

// //     void display_info() {    // no parameters needed
// //         cout << brand << endl;
// //         cout << model << endl;
// //         cout << year << endl;
// //     }
// // };

// // int main() {
// //     Car c1("Toyota", "Innova", 2020);  // pass values at creation
// //     c1.display_info();

// //     Car c2("Fiat", "Vow", 2025);
// //     c2.display_info();
// // }

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

// // class Animal {
// // public:
// //     void speak() {
// //         cout << "Some generic sound" << endl;
// //     }
// // };

// // class Dog : public Animal {
// // public:
// //     void speak() {           // overrides parent
// //         cout << "Woof!" << endl;
// //     }
// // };

// // class Cat : public Animal {
// // public:
// //     void speak() {           // overrides parent
// //         cout << "Meow!" << endl;
// //     }
// // };

// // int main() {
// //     Dog d1;
// //     d1.speak();    // prints Woof!

// //     Cat c1;
// //     c1.speak();    // prints Meow!
// // }

// // #include <iostream>
// // using namespace std;

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Animal {
// // public:
// //     virtual void speak() {
// //         cout << "Some generic sound" << endl;
// //     }
// // };

// // class Dog : public Animal {
// // public:
// //     void speak() override {
// //         cout << "Woof!" << endl;
// //     }
// // };

// // class Cat : public Animal {
// // public:
// //     void speak() override {
// //         cout << "Meow!" << endl;
// //     }
// // };

// // void make_sound(Animal &animal) {
// //     animal.speak();
// // }

// // int main() {
// //     Dog d1;
// //     Cat c1;

// //     make_sound(d1);   // prints Woof!
// //     make_sound(c1);   // prints Meow!
// // }

// // #include <iostream>
// // using namespace std;

// // class Shape{
// //     public:
// //         virtual void area() = 0;

// // };

// // class Circle : public Shape{

// //     public:
// //         void area() override {
// //             float r = 5;
// //             cout << "Area of circle:" << 3.14 * r * r << endl;
// //         }

// // };

// // class Rectangle : public Shape{
// //     public:
// //         void area() override {
// //             float length = 10;
// //             float width = 5;
// //             cout<< "Area of rectangle:"<< length * width << endl;
// //         }
// // };

// // int main(){

// //     Circle c1;
// //     Rectangle r1;

// //     c1.area();
// //     r1.area();

// // }

// #include <iostream>
// using namespace std;

// class Student{
//     public:
//         string name;
//         int age;

//         Student(string name, int age) : name(name), age(age) {}

//         void from_string(string name, int age) {
//             cout << name;
//             cout << age;
//         }
// };

// int main(){
//     Student s1("Raghav", 17);

//     s1.from_string("Raghav", 17);
// }

// #include <iostream>
// using namespace std;
// #include <string>

// class Shape{
//     public:
        

//         virtual void area() = 0;
// };

// class Circle : public Shape{
//     public:
//         float r = 45;
//         void area() override {
//             cout << "Area of the cicle:"<< 3.14 * r*r<<endl;
//         };

        
// };

// class Rectangle: public Shape{
//     public:
//         float length= 44;
//         float width= 23;

//         void area() override{
//             cout << "Area of the Rectangle:"<< length * width<<endl;
//         };

// };

// int main(){

//     Circle c1;
//     c1.area();

//     Rectangle r1;
//     r1.area();

//     return 0;

// }


// #include <iostream>
// using namespace std;
// #include <string>

// class Date{
//     private:
//         int month;
//         int day;
//         int year;
//         static char slash;

//     void setMonth(int m){
//         month = (m>12)? 12: m;
//     };

//     void setDay(int d){
//     if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && d > 31){
//         cout << "Invalid day:" << d << endl;
//     }
//     else if((month == 4 || month == 6 || month == 9 || month == 11) && d > 30){
//         cout << "Invalid day:" << d << endl;
//     }
//     else if(month == 2){
//         // Leap year: divisible by 400 → 29 days
//         // Leap year: divisible by 4 but NOT by 100 → 29 days
//         // All other years → 28 days
//         if((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && d > 29){
//             cout << "Invalid day:" << d << endl;
//         }
//         else if(!(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && d > 28){
//             cout << "Invalid day:" << d << endl;
//         }
//         else{
//             day = d; // ✅ assign day for February valid case
//         }
//     }
//     else{
//         day = d; // ✅ assign day for valid case
//     }
// }

//     void setYear(int y){
//         year = y;
//     }

//     public:
//         void setDate(int m, int d, int y){
//             setYear(y);
//             setMonth(m);
//             setDay(d);
//         }

//         void showDate(){
//             cout << month << slash << day << slash << year << endl;
//         }

// };

// char Date::slash = '/';

// int main(){

//        Date date1 , date2 , date3 ;
//          // Set and display dates
//         date1 . setDate (8 , 25 , 2023) ;
//         date1 . showDate () ;
//         date2 . setDate (13 , 45 , 2024) ; // Invalid month and day
//         date2 . showDate () ;
//         date3 . setDate (5 , 20 , 1990) ;
//         date3 . showDate () ;
//         return 0;

// }

// #include <iostream>
// using namespace std;

// class Car{
//     public:
//         string brand;
//         string model;
//         int year;

//         void display_info(string brand,string model,int year){
//             cout << brand << model << year << endl;

//         }
// };

// int main(){
//     Car c1;
//     c1.brand = "toyota";
//     c1.model = "zxo";
//     c1.year = 2021;
//     c1.display_info("tot","nnx",2222);
// }

// #include <iostream>

// using namespace std;

// // TODO: Implement a normal function to return the square of an integer
// int sqr(int n){
//     return n * n;
// }
// // TODO: Implement an inline function to return the square of an integer
// inline int inlsqr(int n){
//     return n * n;
// }

// int main() {
//     // TODO: Read the number of test cases T.
//     int T;
//     cin>> T;
//     while(T--){
//     // TODO: Repeat for T test cases.
//     // For each test case:
//     // 1. Read N.
//     int n;
//     cin>>n;
//     // 2. Call the normal function.
//     int n1 = sqr(n);
//     // 3. Call the inline function.
//     int n2 = inlsqr(n);
//     // 4. Print both results separated by a space.
//     cout << n1 << " "<< n2 << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <string>

// class Box{
//     public:
//         int length,breadth,height;

//         Box(){
//             length=breadth=height = 0;
//         }

//         Box(int x){
//             length = breadth = height = x;
//         }

//         Box(int l,int b,int h){
//             length = l;
//             breadth = b;
//             height = h;
//         }

//         void display(){
//             cout << length ;
//             cout << breadth ;
//             cout << height << endl ;
//         }
// };

// int main(){

//     Box b1;
//     Box b2(3);
//     Box b3(3,4,5);

//     b1.display();
//     b2.display();
//     b3.display();

// }

// #include <iostream>
// using namespace std;

// class Student{
//     private:
//         int marks;

//     public:
//         Student(){
//             marks = 90;
//         }

//         friend void display(Student s1);
// };

// void display(Student s1){
//     cout << "Marks:" << s1.marks << endl;
// }

// int main(){
//     Student s1;

//     display(s1);
    
// }

// #include <iostream>
// using namespace std;

// class Student{
//     private:
//         string name;

//     public:
//         int age;
//         int className;

//         Student(int a, int c);
        
// };

// Student::Student(int a,int c){
//     age = a;
//     className = c;
    
// }

// int main(){
//     Student s1(0, 0);

    
// }

#include <iostream>
using namespace std;

namespace Collage{
    int rollNo = 101;
    string dept = "CS Department";

    void display(){
        cout<< rollNo << dept << endl;
    }
}

struct Cstyle{
    int x;
    int y;
};

class Engine;

class Car{
    private:
        string brand;
        int speed;
        const int id;

        static int objectCount;
};

