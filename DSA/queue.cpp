// #include <iostream>
// using namespace std;
// #include <stdio.h> 
// #define n 5

// int q[n];
// int front = -1;
// int rear = -1;

// void enqueue(int x){
//     if(rear == (n - 1)){
//         printf("Overflow");
//     }
//     else if(front == -1 && rear == -1){
//         front = rear = 0;
//         q[rear] = x;
//     }
//     else{
//         rear++;
//         q[rear] = x;
//     }
// }

// void dequeue(){

//     if(front == - 1 && rear == -1){
//         printf("Underflow");
//     }
//     else if(front == rear){
//         front = rear = -1;
//     }
//     else{
//         front++;
//     }

// }

// void display(){
//     if(front == -1 && rear == -1){

//     }
//     else{
//         for(int i = front;i<=rear;i++){
//             cout<< q[i];
//         }
//     }
// }

// void peek(){
//     if(front == -1 && rear == -1){

//     }
//     else{
//         cout<< q[front];
//     }
// }

// #include <iostream>
// using namespace std;
// #include <stdio.h> 
// #define n 5

// int q[n];
// int front = -1;
// int rear = -1;

// void enqueue(int x){

//     if(front == -1 && rear == -1){
//         front = rear = 0;
//         q[rear] = x;
//     }
//     else if(((rear+1)% n) == front ){
//         cout <<"Queue is full";
//     }
//     else{
//         rear = (rear+1)% n;
//         q[rear]=x;

//     }
// }

// #include <iostream>
// using namespace std;
// class Student {
// int rollNo;
// static int count;
// public:
// Student(int r) : rollNo(r) { count++; }
// static void showCount() {
// cout << "Total: " << count << endl;
// }
// void show() {
// cout << "Roll: " << rollNo << endl;
// }
// };
// int Student::count = 0;
// void demo() {
// static Student s4(104); // static object
// s4.show();
// }
// int main() {
// Student s1(101), s2(102);
// Student::showCount();
// demo();
// demo();
// Student::showCount();
// }

// #include <iostream>
// using namespace std;

//  class shared {

//         static int a;
//         int b;
//         public:
//         void set(int i, int j) {a=i; b=j;}
//         void show();

//  } ;

// int shared::a; // define a
// void shared::show(){
//  cout << "This is static a: " << a;
//  cout << "\nThis is non-static b: " << b;
//  cout << "\n";
// }

// int main(){
// shared x, y;
// x.set(1, 1); // set a to 1
// x.show();
// y.set(2, 2); // change a to 2
// y.show();
// x.show();
// }

// #include <iostream>
//  using namespace std;
//  class shared {
//  public:
//  static int a;
//  } ;

// int shared::a = 99;//public

//  int main(){ // initialize a before
// // creating any objects 
//  cout << "This is initial value of a: " << shared::a;
//  cout << "\n";
//  shared x;
//  cout << "This is x.a: " << x.a;
//  return 0;
//  }

//  #include<iostream>
//  using namespace std;
//  class shared{
 
//     static int resource;
//     public:
//     static int getResource(){
//     if(resource){
//     return 0;}
//     else{
//     resource = 1;
//     return 1;
//     }
//  }

//  void freeResource(){
//  resource = 0;
//  }
// };

// int shared :: resource;
// int main(){
//  shared o1, o2;
//  if(o1.getResource())
//  cout << "\no1 has resource.";
//  if(!shared :: getResource())
//  cout << "\no2 access denied.";
//  o1.freeResource();
//  if(shared :: getResource())
//  cout << "\no2 has resource.";
//  return 0;}

// #include <iostream>
// using namespace std;

// class Student{
//     public:
//         int rollNo;

//         void display(){

//             cout<<"Roll no:" << rollNo;

//         }
// };

// int main(){

//     Student *p = new Student;

//     p->rollNo = 1025170087;
//     p->display();

//     delete p;

//     return 0;
// }

#include <iostream>
using namespace std;

int x = 10;

int main(){
    int x = 20;

    cout<< "Global x :" << ::x<<endl;
    cout<< "normal x: " << x;
}