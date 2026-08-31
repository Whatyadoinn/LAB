// #include <iostream>
// using namespace std;

// void largestElement(int arr[], int n) {

//     int largest = arr[0];

//     for (int i = 0; i < n; i++) {

//         if (largest < arr[i]) {
//             largest = arr[i];
//         }
//     }

//     cout << largest;
// }

// int main() {

//     int arr[10] = {100, 3, 4, 5, 66, 77, 65, 1, 99, 15};

//     largestElement(arr,10);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>


// int main() { 
//   // write your code here
//   long long int n;
//   std::cin >> n;
  
//   long long int x;
//   std::cin >> x;

//     std::vector<long long int> v(n);
//     for (int i = 0; i < n; i++) {
//         /* code */
//         std::cin >> v[i];
//     }
    
    
    
//     for (int i = 0; i < n; i++) {
//         /* code */
//         if(v[i]== x){
//             v[i] = v[i] + 1;
//         }
//     }
    
//     for (int i = 0; i < n; i++) {
//         /* code */
//         cout << v[i];
//     }
    
//   return 0;
// }

#include <iostream>
using namespace std;
#include <string>

class Student{

    public:
        int x;
        int n;
        

        int sum(int n,int x){
            cout << n+x;
        };

};

int main(){

    Student s1;

    s1.sum(1,2);

}