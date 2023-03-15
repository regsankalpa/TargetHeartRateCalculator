#ifndef Date_hpp
#define Date_hpp
#include <string>

using namespace std;

class Dates{
public:
    Dates(int = 0, int = 0, int = 0); //constructor
    void setMonth (const int);      //set Month
    int getMonth() const;           //get Month
    void setDay (const int);        //set Date
    int getDay() const;             //get Date
    void setYear (const int);       //set Year
    int getYear() const;            //get Year
    void printDate () const;        //function to print the stored date
private:
    int month;
    int day;
    int year;
};


#endif /* Date_hpp */
