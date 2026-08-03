#include <iostream>
#include <vector>
using namespace std;

vector <int> arr = { 10, 20, 30, 40 };
vector <int> b;
int n;

void Create(){
    
    cout << "Enter the number of elements in array: ";
    cin >> n;
    cout << "Enter the elements in the array:\n";
    for(int i = 0; i < n && i < 100; ++i){
        cin >> b[i];
    }
}

void Display(){
    if (n == 0)
    {
        cout << "No elements in the array";
    }
    cout<<"Elements in array:";
    for(int i = 0;i<n;i++){
        cout<< arr[i]<< ""<< endl;
    }
    
}

void Insert(){

    int pos,element;

    if (n >= 100)
    {
        cout << "Array is full,Cannot insert more elements";
    }

    cout<< "Enter the element you want to insert:";
    cin >> element;
    cout<< "Enter the position you want to insert:";
    cin >> pos;

    for(int i=pos; i<=arr.size();i++){
        arr[i]=arr[i+1];
        arr[pos] = element;
    }

}

void Delete(){
    cout << "Array before deletion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    arr.erase(arr.begin());

    cout << "Array after deletion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

}

int main(){

    int option;
    
    cout << "Enter the program you want to continue with:\n 1. CREATE \n 2. DISPLAY \n 3. INSERT \n 4. DELETE \n 5. LINEAR SEARCH \n 6. EXIT";
    cin >> option;

    switch (option)
    {
    case 1:
       
        Create();

        break;
    
    case 2:
       
        Display();

        break;

    case 3:
       
        Insert();

        break;

    case 4:
       
        break;

    case 5:
       
        break;

    case 6:
        cout << "Exit";
        break;


    default:
        cout << "You entered an invalid option";
        break;
    }

}