#include <iostream>
#include <string>

using namespace std;

class Publication {
 protected:
  string title;
  string author;
  int year;

 public:
  Publication(string title, string author, int year)
      : title(title), author(author), year(year) {}
  Publication() : Publication("No title", "No author", 0) {}
};

class Book: public Publication{
    private:
        string publisher;
        int num_pages;
        int ISBN;
    public:
        
};

int main() {
}