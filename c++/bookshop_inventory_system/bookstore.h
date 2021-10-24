#ifndef Bookstore
#include <iostream>
#include <vector>
#include "book.h"

class Bookstore {
private:
  std::string bookstoreName;
  Book inventory[100];
  int book_count = 0;

  bool RemoveBook(int);
  void AddBook(std::string, std::string);
  bool ReturnBook(int);
public:
  Bookstore(std::string);
  void AddBookPrompt();
  void RemoveBookPrompt();
  void PrintBooks();
  void ReturnBookPrompt();
};

#endif
