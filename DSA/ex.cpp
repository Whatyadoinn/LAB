#include <iostream>
using namespace std;

class Date{
    private:
        int month;
        int day;
        int year;
        static char stash;


        public:
          void setDate(int day,int month,int year){
            this->day = day;
            this->month = month;
            this->year = year;
          }

          void showDate(){
            cout<< day << "/"<<month<<"/"<<year;
          }
};

int main(){

    Date d1;

    d1.setDate(12,12,2006);

    d1.showDate();

}