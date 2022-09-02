#include <iostream>
#include <string>

using namespace std;

class Capybara {
 protected:
  string capyName = "";
  int capyAge = 0;

 public:
  Capybara();
  void setName(string capyName);
  string getName();
  void setAge(int capyAge);
  int getAge();
};