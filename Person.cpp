#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

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

Person::Person(int mySalary, string myName) {
    getName();
    getSalary();
}
