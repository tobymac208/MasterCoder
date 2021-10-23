#include "bookstore.h"

Bookstore::Bookstore(std::string bookstoreName) : bookstoreName(bookstoreName), count(0){}

void Bookstore::AddBook(std::string title, std::string author){
  if (title != "" && author != ""){
    // Add a new Book to the array. Increment the count at the same time.
    this->inventory[this->count++] = Book(title, author);
  }else{
    std::cout << "You must provide a title and an author." << std::endl;
  }
}

void Bookstore::RemoveBook(std::string title){
  // TODO: implement
}
