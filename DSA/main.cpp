#include <iostream>
using namespace std;

class Student{
    public:
        int age;

    void setAge(int a){
        age = a;
    }

    void display(){
        cout<<"Age:"<<age<<endl;
    }

};

int main(){
    Student s1;

    s1.setAge(20);
    s1.display();

    return 0;
}