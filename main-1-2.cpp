#include <iostream>
#include <string>

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main() {
    std::string courses[4] = {"maths","english","history","science"};
    std::string students[1] = {"Haydn"};
    int report_card[1][4] = {100, 50, 70, 90};
    int nstudents = 1;
    print_class(courses, students, report_card, nstudents);
}