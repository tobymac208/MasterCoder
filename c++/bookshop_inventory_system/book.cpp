#include "book.h"

int Book::_currentId;

Book::Book(){
  // DO nothing
}

Book::Book(std::string title, std::string author) : title(title), author(author){
  // Increment the id and add initialize the current id.
  this->id = 100 + Book::_currentId++;
}

int Book::GetId(){
  return this->id;
}

std::string Book::GetTitle(){
  return this->title;
}

std::string Book::GetAuthor(){
  return this->author;
}
