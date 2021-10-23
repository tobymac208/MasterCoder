#include <iostream>
#include "bookstore.h"

int main(){
  Bookstore* bookstore = new Bookstore("US's Best Books");

  // Unallocate space
  delete bookstore;
  return 0;
}
