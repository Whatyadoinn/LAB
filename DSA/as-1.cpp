// #include <iostream>
// using namespace std;

// int arr[100];
// int n = 0;

// void Create() {
//     cout << "Enter the number of elements in array: ";
//     cin >> n;
//     cout << "Enter the elements in the array:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
// }

// void Display() {
//     if (n == 0) {
//         cout << "No elements in the array\n";
//         return;
//     }
//     cout << "Elements in array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void Insert() {
//     if (n >= 100) {
//         cout << "Array is full, cannot insert more elements\n";
//         return;
//     }

//     int pos, element;
//     cout << "Enter the element you want to insert: ";
//     cin >> element;
//     cout << "Enter the position you want to insert (0 to " << n << "): ";
//     cin >> pos;

//     if (pos < 0 || pos > n) {
//         cout << "Invalid position\n";
//         return;
//     }

//     for (int i = n; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }

//     arr[pos] = element;
//     n++;
//     cout << "Inserted Successfully\n";
// }

// void Delete() {
//     if (n == 0) {
//         cout << "Array is empty \n";
//         return;
//     }

//     cout << "Array before deletion\n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     int pos;
//     cout << "Enter the position to delete (0 to " << n - 1 << "): ";
//     cin >> pos;

//     if (pos < 0 || pos >= n) {
//         cout << "Invalid position\n";
//         return;
//     }

//     for (int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     n--;

//     cout << "Array after deletion\n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// void linearSearch() {
//     int key;
//     cout << "Enter the Element you are looking for: ";
//     cin >> key;

//     bool found = false;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             cout << "Element found at index " << i << endl;
//             found = true;
//             break;
//         }
//     }

//     if (!found) {
//         cout << "Element not found." << endl;
//     }
// }

// int main() {
//     int option;

//     do {
//         cout << "\nEnter the program you want to continue with:\n"
//              << " 1. CREATE\n 2. DISPLAY\n 3. INSERT\n 4. DELETE\n 5. LINEAR SEARCH\n 6. EXIT\n";
//         cin >> option;

//         switch (option) {
//             case 1:
//                 Create();
//                 break;
//             case 2:
//                 Display();
//                 break;
//             case 3:
//                 Insert();
//                 break;
//             case 4:
//                 Delete();
//                 break;
//             case 5:
//                 linearSearch();
//                 break;
//             case 6:
//                 cout << "Exit\n";
//                 break;
//             default:
//                 cout << "You entered an invalid option\n";
//                 break;
//         }
//     } while (option != 6);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int arr[100], i = 0, n;

// void Display() {
//     cout << "Array: ";
//     for (int k = 0; k < n; k++) {
//         cout << arr[k] << " ";
//     }
//     cout << endl;
// }

// void Delete() {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 for (int k = j; k < n - 1; k++) {
//                     arr[k] = arr[k + 1];
//                 }
//                 n--;   
//                 j--;   
//             }
//         }
//     }
// }

// int main() {
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     cout << "Enter the elements you want to insert: ";
//     while (i < n) {
//         cin >> arr[i];
//         i++;
//     }

//     cout << "Before removing duplicates:\n";
//     Display();

//     Delete();

//     cout << "After removing duplicates:\n";
//     Display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10] = {10, 20, 30, 40, 50, 80, 100, 10, 20, 0};
//     int min = 0;

//     for (int i = 1; i < 10; i++) {
//         if (arr[min] > arr[i]) {
//             min = i;
//         }
//     }

//     cout << "Minimum element: " << arr[min] << endl;
//     cout << "Index: " << min << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

//     int arr[20]={100,200,2,4,56,78,43,56,33,24,44};
//     int max = 0;

//     for (int i = 0; i <20; i++)
//     {
//         /* code */
//         if(arr[max]<arr[i]){
//             max = i;
//        }
//     }
    
//     cout<<"Index of Max:"<<max<<endl;
//     cout<<"Max value:"<<arr[max];

// }

// Q1 ASS -2

#include <iostream>
using namespace std;

// class Point {
//     public:
//      int x,y;
// };

//  Point byValue(Point p){
//         p.x *= 2;
//         return p;
//     }

//     Point byAddress(Point *p){
//         p->y *= 2;
//         return *p;
//     }

// int main(){

//     Point a = {5, 5};
//     Point b = byValue(a);
//     cout << "By value: a.x=" << a.x << " b.x=" << b.x << endl;
//     Point c = byAddress(&a);
//     cout << "By address: a.x=" << a.x << " c.x=" << c.x << endl;

// }

// Q2

// class Rect{
//     public:
//         int l, b;
//         int area(){
//             return l*b;
//         };


// };

// int main(){


//     Rect r1[2]={{1,2},{3,4}};
//     for (int i = 0; i < 2; i++)
//     {
//         /* code */
//         cout << "Area " << i+1 << " = " << r1[i].area() << endl;

//     }
    

// }

// Q 3

// class S{
//     public:
//         int sum(int x, int y);
// };

// int S::sum(int x , int y){
//     return x+y;
// }

// int main(){
//     S s1;

//     cout<< s1.sum(3,4);

// }

// Q 4

// int x = 20;

// int main(){

//     int x = 10;

//     cout << ::x;

// }

// Q 5


// class A { 
//     public: 
//     static int x; };

// int A::x = 5;

// int main()
// { 
//     cout << A::x << endl;
//  }

// Q 6

// #include <stdio.h>
// #include <iostream>

// Q7

// class Cube {
//     public:
//        int num;

//     int cu(int num){
//         return num * num * num;
//     }
// };

// int main(){
//     Cube c1;

//     cout<< c1.cu(5);

// }

// Q 8

// #include <iostream>
// using namespace std;
// int x = 1;
// class A {
// public:
//     static int x;
//     void show() {
//         int x = 3;
//         cout << x << " " << ::x << " " << A::x << endl;
//     }
// };
// int A::x = 2;
// int main() { A a; a.show(); }

// Q 9

// class A{

//     public:
//         static int x;
//     A(){
//         x++;
//     };

//     static int get(){
//         return x;
//     }

// };

// int A::x = 0;

// int main(){

//     A s1;

//     cout << s1.x;


// }

// Q 10 

// class cn{

//     int x = 10;

//     public:
//         int show() const {
//             cout << x;
//             // int x = 50;
//         }

// };

// int main(){

//     cn c1;

//     c1.show();

// }

// int main(){

//     bool answer;

//     cout<<"Ruhani Bhateja would you like to be"

// }