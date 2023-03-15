
#include <iostream>
#include <string>
#include "Date.hpp"
#include "HeartRateCalculator.hpp"

using namespace std;

int main() {
    //Do not print on main. Print through the cpp files
    HeartRateCalculator user1;
    string first, last;
    int bmonth, bday, byear, cmonth, cday, cyear;
    cout << "Please Enter The Following Details To See Your Target Heart Rate: " << endl;
    cout <<" Enter Your First Name: ";
    cin >> first;
    cout <<" Enter Your Last Name: ";
    cin >> last;
    cout <<" Enter Your Date of Birth (mm dd yyyy): ";
    cin >> bmonth >> bday >> byear;
    cout <<" Enter Today's Date (mm dd yyyy): ";
    cin >> cmonth >> cday >> cyear;

    Dates bdate(bmonth, bday, byear);
    Dates cdate(cmonth, cday, cyear);
    
    user1.setfName(first);
    user1.setlName(last);
    user1.setbirthDate(bdate);
    user1.setAge(cdate);
    int age = user1.getAge();
    user1.setMaximumRate(age);
    user1.setmaxTargetRate(age);
    user1.setminTargetRate(age);
    user1.printRates();
    
    
}
