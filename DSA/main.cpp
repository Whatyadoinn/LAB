// #include <iostream>
// using namespace std;

// class Student{
//     public:
//         int age;

//     void setAge(int a){
//         age = a;
//     }

//     void display(){
//         cout<<"Age:"<<age<<endl;
//     }

// };

// int main(){
//     Student s1;

//     s1.setAge(20);
//     s1.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <string>

// class Teacher{

//     private:
//     double salary;

//     public:
//     // Properties:
//         string name;
//         string dept;
//         string subject;

//         // methods
//         void changeDept(string newDept){
//             dept = newDept;
//         }

//         void changeName(string newName){
//             name = newName;
//         }

//         void changeSubject(string newSubject){
//             subject = newSubject;
//         }

//         void setSalary(double newSalary){
//             salary = newSalary;
//         }

//         double getSalary(){
//             return salary;
//         }

// };

// int main(){

//     Teacher t1;

//     t1.name = "Skraiwar";
//     t1.dept = "S";
//     t1.subject = "p";
//     t1.setSalary(4000);
//     t1.getSalary();

//     cout << t1.name <<endl;
//     cout << t1.getSalary();


//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <string>

// class Teacher{

//     private:

//     double salary;
//     public:

//     string name;
   
//     string subject;
//     string dept;

//     // non-parameterized
//     Teacher(){
//        dept = "Computer Science";
//     }

//     // parameterized contructor
//     Teacher(string name,string dept, string subject,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     // Copy constructor:

//     Teacher(Teacher &orgObj){
//         cout<<"I am a copy constructor"<<endl;
//         this->name = orgObj.name;
//         this->subject = orgObj.subject;
//         this->salary = orgObj.salary;
//         this->dept = orgObj.dept;
//     }

//     string setName(string name){
//         return name;
//     }

//     double setSalary(double salary){
//         return salary;
//     }

//     string setSubject(string subject){
//         return subject;
//     }

//     string setDept(string dept){
//         return dept;
//     }

//     void getInfo(){
//         cout<<"name:"<<name<<endl;
//         cout<<"subject:"<<subject<<endl;
//     }

// };

// class Account{

//     private:

//         double balance;
//         string password;

//     public:
//         string accountId;
//         string username;
        
        
        

// };

// class Student{

//     public:
//     string name;
//     double* cgpaPtr;

//     Student(string name,double cgpa){
//         this->name= name;
//         cgpaPtr = new double ;
//         *cgpaPtr = cgpa;
//     }

//     ~Student(){
//         cout << "HI i delete everything";
//         delete cgpaPtr;
//     }

//     Student(Student &cpyObj){
//         this->name = cpyObj.name;
//         this->cgpaPtr = cpyObj.cgpaPtr;
//     }

//     void getInfo(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Cgpa:"<<*cgpaPtr<<endl;
//     }

// };

// int main(){
//     Student s1("sk",1221);
//     Student s(s1);

//     s.getInfo();

// }

// Encapsulation/Inheritance/polymorphism/abstraction..

#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        // Person(string name,int age){
        //     this->name = name;
        //     this->age = age;
        // }
};

class Student : public Person{

    public:
        int rollNo;

        void getInfo(){
            cout << "Name:"<< name <<endl;
            cout << "Age:"<<age<<endl;
            cout<< "Roll No:"<<rollNo<<endl;
        }
};

int main(){

    Student s1;
    s1.name = "rahul";

    return 0;
    
}
    

