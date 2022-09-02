#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(int mySalary, string myName) {
    mySalary = mySalary;
    myName = myName;
}

void setName(string myName) {
}

string getName() {
    string myName = "";
    cin >> myName;
    return myName;
}

void setSalary(int mySalary) {

}

int getSalary() {
    int mySalary = 0;
    cin >> mySalary;
    return mySalary;
}