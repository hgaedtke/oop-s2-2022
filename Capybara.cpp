#include <iostream>
#include <string>
#include "Capybara.h"

using namespace std;

Capybara::Capybara(){
    setName(capyName);
    setAge(capyAge);
}

void Capybara::setName(string capyName){
    getline(cin, capyName);
}

string Capybara::getName(){
    cout << "Name: " << capyName;
    return capyName;
}

void Capybara::setAge(int capyAge){
    cin >> capyAge;
}

int Capybara::getAge(){
    cout << "Age: " << capyAge;
    return capyAge;
}