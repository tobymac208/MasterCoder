#ifndef Book
#include <iostream>
class Book {
private:
  static int _currentId;

  std::string title;
  std::string author;
  int id;
public:
  Book();
  Book(std::string, std::string);
  int GetId();
  std::string GetTitle();
  std::string GetAuthor();
};

#endif
