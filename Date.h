#include <iostream>

class Date {
    public:
        Date(int _month,int _day, int _year){
            setMonth(_month);
            day = _day;
            year = _year;
        }

        void displaysDate () {
            std::cout << day<<"/"<< month<<"/"<<year;

        }
//SET     
         void setMonth(int _month) {
            month = _month;
            if (_month >= 1 && _month <= 12) {
                 month = _month;
            }
            else { 
                month = 1;
            }
        }
         void setDay(int _day) {
            day = _day;
            }
         void setYear(int _year) {
            year = _year;
            }

//GET      
       int getMonth() const {
            return month;
        }

        int getDay() const {
            return day;
        }

        int getYear() const {
            return year;
        }


    private:
        int month;
        int day;
        int year;

};