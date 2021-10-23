#ifndef Bookstore
#include <iostream>
#include <vector>
#include "book.h"

class Bookstore {
private:
  std::string bookstoreName;
  Book inventory[100];
  int book_count;
public:
  Bookstore(std::string);
  void AddBook(std::string, std::string);
  void RemoveBook(std::string);
};

#endif
