#ifndef Bookstore
#include <iostream>
#include <vector>
#include "book.h"

class Bookstore {
private:
  std::string bookstoreName;
  Book inventory[100];
  int book_count = 0;
public:
  Bookstore(std::string);
  void AddBook(std::string, std::string);
  void RemoveBook(int);
  void PrintBooks();
};

#endif
