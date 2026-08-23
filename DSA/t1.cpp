#include <iostream> 
using namespace std;
#include <string>


// Blueprint defined
class Toyota{
    
    // Define public data members
    public:
        int year;
        string model;
        
        // function member defined here
     void info(int year,string model){
            cout<< year<<" "<<model;
            
        }
       

};



int main(){

    Toyota innova1;
    Toyota fortuner1;

    innova1.info(2025,"Hybrid");
    innova1.info(2020,"Global");
    innova1.year = 2020;

    cout<< innova1.year;


    
}

