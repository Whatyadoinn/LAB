#include <iostream>
using namespace std;

int arr[100];
int n = 0;

void Create() {
    cout << "Enter the number of elements in array: ";
    cin >> n;
    cout << "Enter the elements in the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void Display() {
    if (n == 0) {
        cout << "No elements in the array\n";
        return;
    }
    cout << "Elements in array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Insert() {
    if (n >= 100) {
        cout << "Array is full, cannot insert more elements\n";
        return;
    }

    int pos, element;
    cout << "Enter the element you want to insert: ";
    cin >> element;
    cout << "Enter the position you want to insert (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;
    cout << "Inserted Successfully\n";
}

void Delete() {
    if (n == 0) {
        cout << "Array is empty \n";
        return;
    }

    cout << "Array before deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int pos;
    cout << "Enter the position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position\n";
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void linearSearch() {
    int key;
    cout << "Enter the Element you are looking for: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }
}

int main() {
    int option;

    do {
        cout << "\nEnter the program you want to continue with:\n"
             << " 1. CREATE\n 2. DISPLAY\n 3. INSERT\n 4. DELETE\n 5. LINEAR SEARCH\n 6. EXIT\n";
        cin >> option;

        switch (option) {
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
                Delete();
                break;
            case 5:
                linearSearch();
                break;
            case 6:
                cout << "Exit\n";
                break;
            default:
                cout << "You entered an invalid option\n";
                break;
        }
    } while (option != 6);

    return 0;
}