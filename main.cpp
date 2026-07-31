 // #include <iostream>
// using namespace std;

// int main(){

//     int numbers[5];

//     numbers[0]=10;
//     numbers[4]=50;

//     cout<<numbers[0]<<endl;
//     cout<<numbers[4]<<endl;

// }

// 

// #include <iostream>
// using namespace std;

// struct student
// {
//     string name;
//     int age;
//     char grade;
// };


// int main(){

//     student s1;

//     s1.name = "Liam";
//     s1.age = 35;
//     s1.grade = 'A';

//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.grade<<endl;

// }

// #include <iostream>
// using namespace std;

// int main(){

//     int x = 5;
//     cout<<&x;

// }

// #include <iostream>
// using namespace std;

// int main(){

//     string food = "Pizza";
//     string &meal = food;
//     string* ptr = &food;

//     cout<<&food<<endl;
//     cout<<*ptr<<endl;

//     ptr = "Ham";

//     cout<<*ptr;

//     delete ptr;

// }

// #include <iostream>
// using namespace std;

// void myFunction(){

//     cout<<"Fuckumean?"<<endl;

// }

// int main(){

//     myFunction();
//     myFunction();
//     myFunction();
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main() {

//     int matrix[3][3] = {
//         {10, 20, 30},
//         {40, 30, 40},
//         {50, 40, 70},
//     };

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cout << matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// struct car{
//     string brand;
//     string model;
//     int year;
// };

// int main(){
//     car ruh;
//     ruh.brand = "bmw";
//     ruh.model = "z4";
//     ruh.year = 2026;

//     cout << ruh.brand << endl;
//     cout << ruh.model << endl;
//     cout << ruh.year << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Car {
//   string brand;
//   int year;
// };

// void myFunction(Car c){
//   cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
// }

// int main() {
//   Car myCar = {"Toyota", 2020};
//   myFunction(myCar);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// float toCelcius(float fahrenheit){
//     return (5.0 / 9.0) * (fahrenheit - 32.0);
// }

// int main(){

//     float f_value = 98.6;

//     float result = toCelcius(f_value);

//     cout<<"To Celcius From Farhenheit:"<< result<<endl;

//     return 0;

// }

// #include <iostream>
// using namespace std;

// void countdown(int n) {
//   if (n > 0) {
//     cout << n << " "<<endl;
//     countdown(n - 1);
//   }
// }

// int main() {
//   countdown(5);
// }

// #include <iostream>
// using namespace std;

// int sum(int n){

//     if(n==2){
//         return 2;
//     }
    
//     return sum(n-2) + n;
    

// }   

// int main(){

//     sum(100);
//     cout<<sum(100)<<endl;

// }

// #include <iostream>
// using namespace std;

// int fact(int n){

//     if(n>1){
//         return fact(n-1) * n;
//     }
//     else{
//         return 1;
//     }

// }

// int main(){

//    int result = fact(5);

//    cout<<result;

// }

// #include <iostream>
// using namespace std;

// int fin(int n){
    
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fin(n-1)+ fin(n-2);
    
// }

// int main(){

//     for (int i = 0; i <=10; i++)
//     {
//         cout<<fin(i)<<" ";
//     }
    

// }

// #include <iostream>
// using namespace std;

// int main(){

//     auto message = [](){
//         cout<<"Hello World";
//     };

//     message();
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main(){

//     enum Week{
//         Monday=1,
//         Tuesday=2,
//         Wednesday=3,
//         Thursday=4,
//         Friday=5,
//         Saturday=6,
//         Sunday=7

//     };

//     enum Week a = Tuesday;

//     switch(a){

//         case Monday:
//         cout<<"Monday"<<endl;
//         break;

//         case Tuesday:
//         cout<<"Tuesday"<<endl;
//         break;

//         case Wednesday:
//         cout<<"Wednesday"<<endl;
//         break;

//         case Thursday:
//         cout<<"Thursday"<<endl;
//         break;

//         case Friday:
//         cout<<"Friday"<<endl;
//         break;

//         case Saturday:
//         cout<<"Saturday"<<endl;
//         break;

//         case Sunday:
//         cout<<"Sunday"<<endl;
//         break;

//     }

// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//    string a = "Apple";

//    cout<<&a<<endl;
//    cout<<a;

// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     string food = "Chicken Fries";
//     string *a = &food;

//     cout<< food <<endl;
    
//     cout<< a <<endl;

//     cout<< &food <<endl;

//     //derefrencing
//     cout<< *a <<endl;

//     //Modify


//     cout<< food <<endl;
    
// }

// #include <iostream>
// using namespace std;

// int main(){

//   int* ptr = new int;
//     cout << *ptr;

//     delete(ptr);
// }

// #include <iostream>
// #include <string>
// using namespace std;


//     //Function 1:
//     int myInt(int x, int y){
//         return x+y;
//     }
//     //Function 2:
//     double myDouble(double x,double y){
//         return x+y;
//     }

//     int main(){

//         cout<<myInt(4,5)<<endl;
//         cout<<myDouble(5.44848848,4.5998868)<<endl;

//     }


// #include <iostream>
// using namespace std;

// int x = 10;

// int main(){

//     cout<<x<<endl;

//     int x = 20;

//     cout<<x<<endl;

// }

// #include <iostream>
// using namespace std;

// int sum(int n){

//     if(n>0){
//         return n +sum(n-1);
//     }
//     else{
//         return 0;
//     }

// }

// int main(){

//     cout<<sum(10)<<endl;

// }

// #include <iostream>
// using namespace std;

// void sub(int n){

//     if(n > 0){
//         cout<<n<<" "<<endl;
//         sub(n-1);
//     }
    
// }

// int main(){

//     sub(5);

// }

// #include <iostream>
// using namespace std;

// int fact(int n){

//     if(n>1){
//         return n * fact(n-1);
//     }
//     else{
//         return 1;
//     }

// }

// int main(){

//     cout<<fact(5);

// }

// #include <iostream>
// using namespace std;

// int main(){

//     auto a = [](int a,int b){
//         return a * b;
//     };

//     cout<<a(4,5);

// }

// #include <iostream>
// using namespace std;

// class myClass{
//         public:
//             int myNum;
//             string myName;
//     };

// int main(){

//     myClass e1;

//     e1.myNum = 11;
//     e1.myName = "Priii";

//     cout<<e1.myName<<endl;
//     cout<<e1.myNum<<endl;

// }

// #include <iostream>
// using namespace std;

// class myClass{
//     public:
//      void myFun();
// };

// void myClass::myFun(){

//     cout<<"This is a function";

// }

// int main(){

//     myClass v1;

//     v1.myFun();

// }

// #include <iostream>
// using namespace std;

// class Dog{
//     public:
//     void bark();
// };

// void Dog::bark(){

//     cout<<"Woof";

// }

// int main(){

//     Dog v1;

//     v1.bark();

// }

// #include <iostream>
// using namespace std;

// class myClass{
//     public:
//     void myMethod()
//     {cout<<"Hello World";}
// };

// int main(){

//     myClass n1;
//     n1.myMethod();
//     return 0;

// }

// #include <iostream>
// using namespace std;

// class Car {
//   public:
//     int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed) {
//   return maxSpeed;
// }

// int main() {
//   Car myObj; 
//   cout << myObj.speed(200); 
//   return 0;
// }

