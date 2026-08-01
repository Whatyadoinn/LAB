// Part 1

#include <iostream>
#include <string>
using namespace std;

// int main(){

//     cout<<"Hello World";

//     cout<<"Hi\n";
//     cout<<"Hi there"<<endl;

//     cout<<"Tab here\t"<<endl;
//     cout<<"alarm\a"<<endl;
//     cout<<"carriage return\r";

// return 0;

// }

// Part 2

// int celsius, fahrenheit;

// int convert() {
//     fahrenheit = (9 * celsius / 5) + 32;
//     return fahrenheit;
// }

// int main() {
//     cout << "Enter the temperature in Celsius: ";
//     cin >> celsius;

//     cout << "Temperature in Fahrenheit: " << convert() << endl;

//     return 0;
// }

// Part 3

// int main() {

    // ---------------- FOR LOOP ----------------

//     cout << "1. Normal for loop\n";
//     for (int i = 0; i < 5; i++) {
//         cout << i << " ";
//     }

//     cout << "\n2. Without initialization in for\n";
//     int i = 0;
//     for (; i < 5; i++) {
//         cout << i << " ";
//     }

//     cout << "\n3. Without increment in for\n";
//     i = 0;
//     for (; i < 5;) {
//         cout << i << " ";
//         i++;
//     }

//     cout << "\n4. Without initialization and increment\n";
//     i = 0;
//     for (; i < 5;) {
//         cout << i << " ";
//         i++;
//     }

//     cout << "\n5. Infinite for loop (break after 5 iterations)\n";
//     i = 0;
//     for (;;) {
//         if (i == 5)
//             break;
//         cout << i << " ";
//         i++;
//     }

    // ---------------- WHILE LOOP ----------------

//     cout << "\n6. Normal while loop\n";
//     i = 0;
//     while (i < 5) {
//         cout << i << " ";
//         i++;
//     }

//     cout << "\n7. While loop with break\n";
//     i = 0;
//     while (true) {
//         if (i == 5)
//             break;
//         cout << i << " ";
//         i++;
//     }

    // ---------------- DO-WHILE LOOP ----------------

//     cout << "\n8. Normal do-while loop\n";
//     i = 0;
//     do {
//         cout << i << " ";
//         i++;
//     } while (i < 5);

//     cout << "\n9. do-while executes at least once\n";
//     i = 10;
//     do {
//         cout << i << " ";
//         i++;
//     } while (i < 5);

//     cout << "\n10. Infinite do-while loop (break after 5 iterations)\n";
//     i = 0;
//     do {
//         if (i == 5)
//             break;
//         cout << i << " ";
//         i++;
//     } while (true);

//     cout << endl;
//     return 0;
// }

// Part 4

// struct Student
// {
//     string Name, Degree, Hostel;
//     int Roll_No;
//     float CurrentCGPA;

//     void addDetails()
//     {
//         cout << "Enter Name: ";
//         getline(cin, Name);

//         cout << "Enter Roll No: ";
//         cin >> Roll_No;
//         cin.ignore();

//         cout << "Enter Degree: ";
//         getline(cin, Degree);

//         cout << "Enter Hostel: ";
//         getline(cin, Hostel);

//         cout << "Enter Current CGPA: ";
//         cin >> CurrentCGPA;
//         cin.ignore();
//     }

//     void updateCGPA()
//     {
//         cout << "Enter New CGPA: ";
//         cin >> CurrentCGPA;
//         cin.ignore();
//     }

//     void updateHostel()
//     {
//         cout << "Enter New Hostel: ";
//         getline(cin, Hostel);
//     }

//     void displayDetails()
//     {
//         cout << "Student Details\n";
//         cout << "Name: " << Name << endl;
//         cout << "Roll No: " << Roll_No << endl;
//         cout << "Degree: " << Degree << endl;
//         cout << "Hostel: " << Hostel << endl;
//         cout << "Current CGPA: " << CurrentCGPA << endl;
//     }
// };

// int main()
// {
//     Student s;

//     s.addDetails();
//     s.displayDetails();

//     s.updateCGPA();
//     s.updateHostel();

//     cout << "\nAfter Updating:\n";
//     s.displayDetails();

//     return 0;
// }

// Part 5

// class Student{
//     private:
//         string Name;
//         int Roll_No;
//         string Degree;
//         string Hostel;
//         float CurrentCGPA;

//     void displayDetails(){
//         cout << "Student Details:";
//         cout << "Name: " << Name << endl;
//         cout << "Roll No: " << Roll_No << endl;
//         cout << "Degree: " << Degree << endl;
//         cout << "Hostel: " << Hostel << endl;
//         cout << "Current CGPA: " << CurrentCGPA << endl;
//     }

//     public:
//         void addDetails()
//         {
//         cout << "Enter Name: ";
//         getline(cin, Name);

//         cout << "Enter Roll No: ";
//         cin >> Roll_No;
//         cin.ignore();

//         cout << "Enter Degree: ";
//         getline(cin, Degree);

//         cout << "Enter Hostel: ";
//         getline(cin, Hostel);

//         cout << "Enter Current CGPA: ";
//         cin >> CurrentCGPA;
//         cin.ignore();
//                          }

//      void updateCGPA()
//     {
//         cout << "Enter New CGPA: ";
//         cin >> CurrentCGPA;
//         cin.ignore();
//     }

//     void updateHostel()
//     {
//         cout << "Enter New Hostel: ";
//         getline(cin, Hostel);
//     }

//     void showDetails()   
//     {
//         displayDetails();
//     }


// };

// int main()
// {
//     Student s;

//     s.addDetails();
//     s.showDetails();

//     s.updateCGPA();
//     s.updateHostel();

//     cout << "After Updating:\n";
//     s.showDetails();

//     return 0;
// }

// Part 6

// class t1{
//     private:
//         void Hello(){
//             cout<<"Hello World";
//         }

//     public:
//         void show(){
//             Hello();
//         }
// };

// int main(){

//     t1 t;

//     t.show();

//     // t.Hello();

//     return 0;
// }

