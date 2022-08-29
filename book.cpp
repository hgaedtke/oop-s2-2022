#include <iostream>
#include <string>
#include "book.h"

using namespace std;

void book::create_book() {
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter Title: ";
    getline(cin, title);
    cout << "Enter ISBN: ";
    cin >> ISBN;
}

void book::get_book() {
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "ISBN: " << ISBN << endl;
}