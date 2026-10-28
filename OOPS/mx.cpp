// Function overloading.

// #include <iostream>
// using namespace std;

// class Base{
//     public:
//         void show(){
//             cout<<"Base class"<<endl;
//         }
// };

// class Derived : public Base{
//     public:
//         void show(){
//             cout<< "Derived class"<<endl;
//         }
// };

// int main(){
//     // Base x1;
//     // Derived d1;

//     // x1.show();
//     // d1.show();

//     Base* ptr;
//     Derived d;
//     ptr = &d;
//     ptr->show();
//     d.show();
// }

// Operator Overloading.

// #include <iostream>
// using namespace std;

// class Channel{
//     int sub;
//         public:
//             Channel(int s){
//                 sub = s;
//             }

//             void operator++(){
//                sub++; 
//             }

//             void display(){
//                 cout<< sub<<endl;
//             }
// };

// int main(){

//     Channel x(100);
//     ++x;
//     x.display();
    
// }

// Operator Overloading using friend function

// #include <iostream>
// using namespace std;

// class Test2;

// class Test1{
//     int a;
//         public:
//             void geta(){
//                 cout<<"Enter a value:"<<endl;
//                 cin>>a;
//             }

//             friend void operator>(Test1,Test2);
// };

// class Test2{
//     int b;
//         public:
//             void getb(){
//                 cout<<"Enter a value:"<<endl;
//                 cin>>b;
//             }

//             friend void operator>(Test1,Test2);
// };

// void operator>(Test1 t1,Test2 t2){
//     t1.a>t2.b?cout<<"a is big":cout<<"b is big";
// }

// int main(){

//     Test1 t1;
//     Test2 t2;

//     t1.geta();
//     t2.getb();

//     t1>t2;

// }

// #include <iostream>
// using namespace std;

// class Addition{

//     private:
//         int a,b;
//             public:
//                 Addition(int a1, int b1){
//                     a = a1;
//                     b = b1;
//                 }

//                 int addNo(){
//                     return (a+b);
//                 }

// };

// void *operator new(size_t size){
//     cout<<"New operator function called:" << size << endl;
//     void *ptr = malloc(size);
//     return ptr;
// };

// void operator delete(void * ptr){
//     cout<<"Delete the pointer"<<endl;
//     free(ptr);
// };

// int main(){

//     Addition *ptr = new Addition(10,15);
//     int s = ptr->addNo();   

//     cout<<s;

//     delete ptr;
//     return 0;
// }

#include <iostream>
using namespace std;

class Addition{

    private:
        int a, b;
            public:
                void setData(int x, int y){
                    a = x;
                    b = y;
                }

                int addNo(){
                    int sum;
                    sum = a + b;
                    return sum;
                }

                void *operator new(size_t size){
                    cout<<"New operator function called:"<<endl;

                }
};

int main(){

    Addition *ptr = new Addition;
    ptr->setData(20,30);
    int s = ptr->addNo();

    cout<< s;

}