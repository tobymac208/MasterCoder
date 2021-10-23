#include <iostream>
#include "bookstore.h"

int main(){
  Bookstore* bookstore = new Bookstore("US's Best Books");
  bookstore->AddBook("Mel Gibson's Adventures", "Mel Gibson");
  bookstore->AddBook("Mel Gibson's Lawsuit", "Some Guy");
  bookstore->AddBook("C++", "Bjarne Stroustrap");

  while(1){
    bookstore->PrintBooks();
    std::cout << "Please enter a choice." << std::endl;

    break;
  }

  // Unallocate space
  delete bookstore;
  return 0;
}
