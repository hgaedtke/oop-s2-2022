#include <iostream>
#include <string>

using namespace std;

class Capybara {
 protected:
  string capyName;
  int capyAge;

 public:
  Capybara();
  void setName(string capyName);
  string getName();
  void setAge(int capyAge);
  int getAge();
};