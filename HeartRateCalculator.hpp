#ifndef HeartRateCalculator_hpp
#define HeartRateCalculator_hpp
using namespace std;
#include "Date.hpp"
#include "string"

class HeartRateCalculator{
public:
    HeartRateCalculator(); //constructor
    
    void setfName(const string &);
    string getfName() const;
    void setlName(const string &);
    string getlName() const;
    void setbirthDate(const Dates);
    Dates getbirthDate() const;
    void setAge(const Dates);
    int getAge() const;
    void setMaximumRate(const int);
    int getMaximumRate() const;
    void setminTargetRate(const int);
    int getminTargetRate() const;
    void setmaxTargetRate(const int);
    int getmaxTargetRate() const;
    void printRates() const;
    

private:
    string firstName;
    string lastName;
    Dates birthDate;
    int age;
    int maxRate;
    int target1;
    int target2;
};



#endif /* HeartRateCalculator_hpp */
