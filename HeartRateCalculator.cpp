#include <iostream>
#include <string>
#include "HeartRateCalculator.hpp"

using namespace std;

HeartRateCalculator::HeartRateCalculator(){}

void HeartRateCalculator::setfName(const string &first){
    firstName = first;
}

string HeartRateCalculator::getfName() const {
    return firstName;
}

void HeartRateCalculator::setlName(const string &last){
    lastName = last;
}

string HeartRateCalculator::getlName() const {
    return lastName;
};

void HeartRateCalculator::setbirthDate(const Dates bdate){
    birthDate = bdate;
}

Dates HeartRateCalculator::getbirthDate() const{
    return birthDate;
}

void HeartRateCalculator::setAge(const Dates today){
    if ( today.getMonth() > birthDate.getMonth()){
        age = today.getYear() - birthDate.getYear();
    }
    else if((today.getMonth() == birthDate.getMonth()) && (today.getDay() >= birthDate.getDay())){
        age = today.getYear() - birthDate.getYear();
    }
    else {
        age = today.getYear() - birthDate.getYear() - 1;
    }
}

int HeartRateCalculator::getAge() const{
    return age;
}
void HeartRateCalculator::setMaximumRate(int ageinyears) {
    maxRate = 220 - ageinyears;
}
int HeartRateCalculator::getMaximumRate() const {
    return maxRate;
}
void HeartRateCalculator::setminTargetRate(int ageinyears){
    target1 = 0.5*(220-ageinyears);
}

int HeartRateCalculator::getminTargetRate() const {
    return target1;
}
void HeartRateCalculator::setmaxTargetRate(int ageinyears){
    target2 = 0.85*(220 - ageinyears);
}
int  HeartRateCalculator::getmaxTargetRate() const {
    return target2;
}
void HeartRateCalculator::printRates() const {
    cout <<"--------------------------------------------------------------------------------" << endl;
    cout <<"Here are your details:" << endl;
    cout << endl;
    cout <<" First Name: " << firstName << endl;
    cout <<" Last Name: " << lastName << endl;
    cout <<" Date of Birth: "<< birthDate.getMonth() << " " << birthDate.getDay() <<" "<< birthDate.getYear() << endl;
    cout <<" Age (in years): " << age << endl;
    cout << " " << lastName <<"'s Maximum Heart Rate: " << maxRate << endl;
    cout << " " << lastName <<"'s Target Heart Rate: " << target1 << " - " << target2 << endl;
}
