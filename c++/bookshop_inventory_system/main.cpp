/** https://hackr.io/blog/cpp-projects **/

#include <iostream>
#include "bookstore.h"

int main(){
  Bookstore* bookstore = new Bookstore("US's Best Books");
  bookstore->AddBook("Mel Gibson's Adventures", "Mel Gibson");
  bookstore->AddBook("Mel Gibson's Lawsuit", "Some Guy");
  bookstore->AddBook("C++", "Bjarne Stroustrap");

  while(1){
    bookstore->PrintBooks();
    std::cout << "\n\n";
    std::cout << "1. Checkout book." << std::endl;
    std::cout << "2. Return book." << std::endl;
    std::cout << "Choice: ";

    std::string choice;
    std::cin >> choice;
  }

  // Unallocate space
  delete bookstore;
  return 0;
}
