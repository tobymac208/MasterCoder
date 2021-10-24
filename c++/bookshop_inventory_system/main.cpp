/** https://hackr.io/blog/cpp-projects **/

#include <iostream>
#include "bookstore.h"

int main(){
  Bookstore* bookstore = new Bookstore("US's Best Books");

  while(1){
    bookstore->PrintBooks();
    std::cout << "\n\n";
    std::cout << "1. Checkout book." << std::endl;
    std::cout << "2. Add book." << std::endl;
    std::cout << "Choice: ";

    int choice;
    std::cin >> choice;

    switch (choice){
      case 1:
      {
        bookstore->RemoveBookPrompt();
        break;
      }
      case 2:
      {
        bookstore->AddBookPrompt();
        break;
      }
      default:
      {
        std::cout << "Invalid input." << std::endl;
        break;
      }
    }
  }

  // Unallocate space
  delete bookstore;
  return 0;
}
