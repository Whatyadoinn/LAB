// ============================================================
//   OOP LAB EVALUATION-1 — COMPLETE CONCEPT PROGRAM
//   Topics: Classes, Constructors, Static, Friends, Pointers,
//           References, Dynamic Memory, Namespaces, const, etc.
// ============================================================

#include <iostream>
#include <string>
using namespace std;

// ============================================================
// SECTION 1: NAMESPACE
// ============================================================
namespace College {
    int rollNo = 101;
    string name = "CS Department";

    void display() {
        cout << "Namespace -> Roll: " << rollNo
             << ", Dept: " << name << endl;
    }
}

// ============================================================
// SECTION 2: STRUCTURE IN C++ (C-style struct vs C++ class)
// ============================================================
struct CStyle {          // In C++, struct members are public by default
    int x;
    int y;
};

// ============================================================
// SECTION 3: FRIEND FUNCTION & FRIEND CLASS (forward declare)
// ============================================================
class Engine;            // Forward declaration needed for friend

// ============================================================
// SECTION 4: MAIN CLASS — "Car"
//   Demonstrates: class spec, objects, static, const,
//   friend, this pointer, constructors, destructor
// ============================================================
class Car {

    // --- Private Data Members ---
    string brand;
    int    speed;
    const  int id;           // const data member — must use initializer list

    // --- Static Data Member (shared by all objects) ---
    static int objectCount;

public:

    // --------------------------------------------------------
    // CONSTRUCTOR 1: Default Constructor
    // --------------------------------------------------------
    Car() : id(0), brand("Unknown"), speed(0) {
        objectCount++;
        cout << "[Default Constructor] Car #" << objectCount
             << " created." << endl;
    }

    // --------------------------------------------------------
    // CONSTRUCTOR 2: Parameterized Constructor
    // --------------------------------------------------------
    Car(string b, int s, int i) : id(i), brand(b), speed(s) {
        objectCount++;
        cout << "[Param Constructor] " << brand
             << " (id=" << id << ") created." << endl;
    }

    // --------------------------------------------------------
    // CONSTRUCTOR 3: Constructor with Default Arguments
    // --------------------------------------------------------
    Car(string b, int s = 100) : id(99), brand(b), speed(s) {
        objectCount++;
        cout << "[Default-Arg Constructor] " << brand
             << " speed=" << speed << " created." << endl;
    }

    // --------------------------------------------------------
    // CONSTRUCTOR 4: Copy Constructor
    // --------------------------------------------------------
    Car(const Car &c) : id(c.id), brand(c.brand), speed(c.speed) {
        objectCount++;
        cout << "[Copy Constructor] Copied -> " << brand << endl;
    }

    // --------------------------------------------------------
    // DESTRUCTOR
    // --------------------------------------------------------
    ~Car() {
        objectCount--;
        cout << "[Destructor] " << brand << " destroyed. "
             << "Remaining: " << objectCount << endl;
    }

    // --------------------------------------------------------
    // CONST MEMBER FUNCTION — cannot modify data members
    // --------------------------------------------------------
    void showDetails() const {
        cout << "  Brand: " << brand
             << " | Speed: " << speed
             << " | ID: " << id << endl;
        // speed = 999; // ERROR if uncommented — const function!
    }

    // --------------------------------------------------------
    // STATIC MEMBER FUNCTION — no 'this' pointer, no object needed
    // --------------------------------------------------------
    static int getCount() {
        return objectCount;
        // Cannot access brand/speed here — no 'this' pointer
    }

    // --------------------------------------------------------
    // THIS POINTER — used to resolve name conflict
    // --------------------------------------------------------
    void setSpeed(int speed) {
        this->speed = speed;   // 'this->speed' = member, 'speed' = parameter
        cout << "  [this pointer] Speed set to " << this->speed << endl;
    }

    // --------------------------------------------------------
    // INLINE FUNCTION — compiler replaces call with code body
    // --------------------------------------------------------
    inline void honk() const {
        cout << "  " << brand << " says: Beep Beep!" << endl;
    }

    // --------------------------------------------------------
    // PASSING OBJECT AS ARGUMENT
    // --------------------------------------------------------
    void compareSpeed(Car other) {       // object passed by value
        if (this->speed > other.speed)
            cout << "  " << brand << " is faster than " << other.brand << endl;
        else
            cout << "  " << other.brand << " is faster than " << brand << endl;
    }

    // --------------------------------------------------------
    // FRIEND FUNCTION DECLARATION(Baisically father who can get info from their children)
    // Grants access to private members of Car
    // --------------------------------------------------------
    friend void showCarBrand(Car &c);
    friend class Engine;     // Friend class — Engine can access Car's private members

    // Getters for external use
    string getBrand() const { return brand; }
    int    getSpeed() const { return speed; }
};

// --- Static member must be defined outside the class ---
int Car::objectCount = 0;

// ============================================================
// SECTION 5: RETURNING OBJECT FROM FUNCTION
// ============================================================
Car createCar() {
    Car temp("ReturnedCar", 180, 55);   // local object
    return temp;                         // returned by value (copy constructor called)
}

// ============================================================
// SECTION 6: FRIEND FUNCTION DEFINITION
// ============================================================
void showCarBrand(Car &c) {
    // Accesses PRIVATE member 'brand' directly — possible due to friendship
    cout << "  [Friend Function] Private brand = " << c.brand << endl;
}

// ============================================================
// SECTION 7: FRIEND CLASS
// ============================================================
class Engine {
public:
    void revEngine(Car &c) {
        // Engine can directly access Car's private member 'speed'
        cout << "  [Friend Class] Engine revving Car speed: "
             << c.speed << " -> " << (c.speed + 50) << endl;
        c.speed += 50;
    }
};

// ============================================================
// SECTION 8: CLASS WITH DYNAMIC CONSTRUCTOR
//   Allocates memory dynamically inside constructor
// ============================================================
class DynClass {
    int *data;      // pointer — will point to heap memory
    int  size;
public:
    // Dynamic Constructor
    DynClass(int s) : size(s) {
        data = new int[size];       // dynamic memory allocation
        for (int i = 0; i < size; i++) data[i] = i * 10;
        cout << "  [Dynamic Constructor] Allocated array of size "
             << size << endl;
    }
    void show() const {
        cout << "  DynClass data: ";
        for (int i = 0; i < size; i++) cout << data[i] << " ";
        cout << endl;
    }
    ~DynClass() {
        delete[] data;              // MUST free heap memory in destructor
        cout << "  [Dynamic Destructor] Memory freed." << endl;
    }
};

// ============================================================
// SECTION 9: REFERENCE VARIABLE DEMO FUNCTION
// ============================================================
void doubleValue(int &ref) {    // ref is an alias for the actual variable
    ref *= 2;
}

// ============================================================
// SECTION 10: MACRO VS INLINE (system-level difference)
// ============================================================
#define MACRO_SQ(x) x*x          // Macro: text substitution, no type safety
inline int inlineSq(int x) {     // Inline: actual function, type-safe
    return x * x;
}

// ============================================================
// SECTION 11: ARRAY OF OBJECTS CLASS
// ============================================================
class Student {
    string name;
    int    marks;
public:
    Student() : name(""), marks(0) {}   // needed for array creation
    Student(string n, int m) : name(n), marks(m) {}
    void show() const {
        cout << "  Student: " << name << " | Marks: " << marks << endl;
    }
};

// ============================================================
//                        MAIN FUNCTION
// ============================================================
int main() {

    cout << "\n========== 1. NAMESPACE ==========\n";
    College::display();
    cout << "Direct access: " << College::rollNo << endl;

    cout << "\n========== 2. STRUCTURE (C-style in C++) ==========\n";
    CStyle pt;
    pt.x = 10; pt.y = 20;
    cout << "Struct x=" << pt.x << ", y=" << pt.y << endl;
    cout << "sizeof(CStyle) = " << sizeof(CStyle) << " bytes" << endl;

    cout << "\n========== 3. SIZEOF OPERATOR ==========\n";
    cout << "sizeof(int)    = " << sizeof(int)    << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(char)   = " << sizeof(char)   << endl;

    cout << "\n========== 4. CONSTRUCTORS ==========\n";
    Car c1;                             // Default constructor
    Car c2("Toyota", 120, 1);           // Parameterized constructor
    Car c3("Honda", 90);                // Default-argument constructor
    Car c4(c2);                         // Copy constructor
    cout << "Total Car objects: " << Car::getCount() << endl;

    cout << "\n========== 5. CONST MEMBER FUNCTION ==========\n";
    c2.showDetails();
    const Car constCar("Kia", 80, 5);  // const object
    constCar.showDetails();             // can only call const functions
    // constCar.setSpeed(50);          // ERROR — non-const function on const object

    cout << "\n========== 6. THIS POINTER ==========\n";
    c2.setSpeed(150);

    cout << "\n========== 7. INLINE vs MACRO ==========\n";
    int a = 3;
    cout << "  MACRO_SQ(a+1) = " << MACRO_SQ(a+1)   // expands to a+1*a+1 = 7 !
         << "  <-- WRONG (macro trap: 3+1*3+1=7)" << endl;
    cout << "  inlineSq(a+1) = " << inlineSq(a+1)   // evaluates (4*4)=16
         << "  <-- CORRECT" << endl;

    cout << "\n========== 8. STATIC KEYWORD ==========\n";
    cout << "Cars alive: " << Car::getCount() << endl;   // static fn, no object
    {
        Car temp("Temp", 60, 9);
        cout << "Inside block, count=" << Car::getCount() << endl;
    } // temp destroyed here
    cout << "After block, count=" << Car::getCount() << endl;

    cout << "\n========== 9. FRIEND FUNCTION ==========\n";
    showCarBrand(c2);   // accesses private 'brand' of c2

    cout << "\n========== 10. FRIEND CLASS ==========\n";
    Engine eng;
    eng.revEngine(c2);  // Engine accesses private 'speed' of c2
    c2.showDetails();

    cout << "\n========== 11. PASSING OBJECT AS ARGUMENT ==========\n";
    c2.compareSpeed(c3);

    cout << "\n========== 12. RETURNING OBJECT FROM FUNCTION ==========\n";
    Car returned = createCar();
    returned.showDetails();

    cout << "\n========== 13. ARRAY OF OBJECTS ==========\n";
    Student students[3] = {
        Student("Alice", 95),
        Student("Bob",   82),
        Student("Carol", 78)
    };
    for (int i = 0; i < 3; i++) students[i].show();

    cout << "\n========== 14. POINTER TO OBJECTS ==========\n";
    Car *ptr = &c3;
    cout << "  Via dot (c3)  : "; c3.showDetails();
    cout << "  Via arrow(*ptr): "; ptr->showDetails();   // arrow operator
    cout << "  Honk via ptr  : "; ptr->honk();

    cout << "\n========== 15. DYNAMIC MEMORY ALLOCATION ==========\n";
    Car *dynCar = new Car("BMW", 200, 7);   // heap allocation — constructor called
    dynCar->showDetails();
    delete dynCar;                           // destructor called, memory freed
    dynCar = nullptr;                        // good practice

    cout << "\n========== 16. DYNAMIC CONSTRUCTOR ==========\n";
    DynClass dc(5);
    dc.show();

    cout << "\n========== 17. REFERENCE VARIABLE ==========\n";
    int val = 10;
    int &ref = val;     // ref is an alias for val
    ref = 25;
    cout << "  val after ref=25: " << val << endl;   // val is now 25
    doubleValue(val);
    cout << "  val after doubleValue: " << val << endl;

    cout << "\n========== 18. CONST DATA MEMBER ==========\n";
    // c2.id = 99;   // ERROR — id is const, cannot reassign
    cout << "  c2 id (const) = " << c2.getSpeed() << endl;

    cout << "\n========== 19. CIN/COUT AS OBJECTS ==========\n";
    // cout is an object of class ostream
    // cin  is an object of class istream
    // They use operator overloading (<<, >>) which is NOT in this syllabus
    // So we just note:
    cout << "  cout is object of ostream class (defined in <iostream>)" << endl;
    cout << "  cin  is object of istream class (defined in <iostream>)" << endl;

    cout << "\n========== PROGRAM END — DESTRUCTORS FIRE ==========\n";
    // All local Car objects destroyed in reverse order of creation
    return 0;
}