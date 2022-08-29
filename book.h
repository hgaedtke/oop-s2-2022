#include <iostream>
#include <string>

using namespace std;

class book{
    protected:
        string author;
        string title;
        char initial;
        int ISBN;
    public:
        void create_book();
        void get_book();
};