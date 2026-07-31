// Part 1

#include <iostream>
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

struct student{
   string Name;
   int Roll_No;
   string Degree;
   string Hostel;
   float CurrentCGPA;

};

int main(){

    struct student s;

    cout<<"Enter name:"<<endl;
    cin>>s.Name;

    cout<<"Enter Roll No:"<<endl;
    cin>>s.Roll_No;

    cout<<"Enter Degree:"<<endl;
    cin>>s.Degree;

    cout<<"Enter Hostel:"<<endl;
    cin>>s.Hostel;

    cout<<"Enter current CGPA:"<<endl;
    cin>>s.CurrentCGPA;

}