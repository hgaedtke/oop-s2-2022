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
    return capyName;
}

void Capybara::setAge(int capyAge){
    cin >> capyAge;
}

int Capybara::getAge(){
    return capyAge;
}