#include "bookstore.h"

Bookstore::Bookstore(std::string bookstoreName){
  this->bookstoreName = bookstoreName;
}

void Bookstore::AddBook(std::string title, std::string author){
  if (title != "" && author != "" && !(this->book_count >= 100)){
    // Add a new Book to the array. Increment the count at the same time.
    this->inventory[this->book_count++] = Book(title, author);
  }else{
    std::cout << "You must provide a title and an author." << std::endl;
  }
}

void Bookstore::RemoveBook(int id){
  Book inventory[100];
  int count = 0;

  // Add all items back into the array except for that id.
  for(int i = 0, len = this->book_count; i <= len; i++){
    if(this->inventory[i].GetId() != id){
      inventory[count++] = this->inventory[i];
    }
  }

  // Decrement the count by 1.
  this->book_count--;
}

void Bookstore::PrintBooks(){
  for(int i = 0, len = this->book_count; i < len; i++){
    std::cout << (i+1) << ". ID: " << this->inventory[i].GetId() << ", Title: " << this->inventory[i].GetTitle() << ", Author: " << this->inventory[i].GetAuthor() << std::endl;
  }
}
