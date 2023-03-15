#include <iostream>
#include <string>
#include "Date.hpp"


Dates::Dates( int m, int d, int y){
    month = m;
    day = d;
    year = y;
}                                               //constructors

void Dates::setMonth(const int m){
    month = m;
}

int Dates::getMonth() const {
    return month;
}

void Dates::setDay(const int d){
    day = d;
}

int Dates::getDay() const {
    return day;
}

void Dates::setYear(const int y){
    year = y;
}

int Dates::getYear() const{
    return year;
}

void Dates::printDate() const {
    cout << endl;
    cout << "Date Stored: " << getMonth() << " " << getDay() << " " << getYear() << endl;
}
