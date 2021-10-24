#include "bookstore.h"

Bookstore::Bookstore(std::string bookstoreName){
  this->bookstoreName = bookstoreName;

  this->AddBook("C++", "Bjarne Stroustrap");
  this->AddBook("Mel Gibson's Rants", "Not Mel Gibson");
  this->AddBook("C", "Dennis Ritchie");
}

void Bookstore::AddBook(std::string title, std::string author){
  if (title != "" && author != "" && !(this->book_count >= 100)){
    // Add a new Book to the array. Increment the count at the same time.
    this->inventory[this->book_count++] = Book(title, author);
  }else{
    std::cout << "You must provide a title and an author." << std::endl;
  }
}

bool Bookstore::RemoveBook(int id){
  Book inventory[100];
  int count = 0;
  bool removed = false;

  // Add all items back into the array except for that id.
  for(int i = 0, len = this->book_count; i <= len; i++){
    if(this->inventory[i].GetId() != id){
      this->inventory[count++] = this->inventory[i];
    }else{
      removed = true;
    }
  }
  if (removed)
    this->book_count--;

  return removed;
}

void Bookstore::AddBookPrompt(){
  std::string title;
  std::string author;

  // Verify the buffer is clear
  std::cin.ignore();

  std::cout << "Book's title: ";
  std::getline(std::cin, title);

  std::cout << "Author's name: ";
  std::getline(std::cin, author);

  this->AddBook(title, author);
}

void Bookstore::RemoveBookPrompt(){
  std::cout << "Enter the ID of the book: ";
  int id;
  std::cin >> id;
  id = (int)id;
  // TODO: Attempt to search for the id
  bool removed = this->RemoveBook(id);
  // TOOD: Remove that book from the current inventory.
  if (removed){
    std::cout << "The book's been checked out." << std::endl;
  }else{
    std::cout << "The operation failed." << std::endl;
  }
}

void Bookstore::PrintBooks(){
  for(int i = 0, len = this->book_count; i < len; i++){
    std::cout << "-> ID: " << this->inventory[i].GetId() << ", Title: " << this->inventory[i].GetTitle() << ", Author: " << this->inventory[i].GetAuthor() << std::endl;
  }
}
