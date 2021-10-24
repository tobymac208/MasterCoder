#include "bank.h"

Bank::Bank(){
  this->transaction_count = 0;
}

void Bank::Login(){
  /* TODO: Implement */
}

void Bank::Logout(){
  /* TODO: Implement */
}

void Bank::Deposit(double amount){
  /* TODO: Implement */
}

bool Bank::Withdraw(double amount){
  return false;
}

void Bank::BankMenu(){
  std::cout << "Current balance: $" << this->balance << std::endl;

  std::cout << "1. Deposit" << std::endl;
  std::cout << "2. Withdraw" << std::endl;
  std::cout << "3. Transactions" << std::endl;
  std::cout << "4. Logout" << std::endl;

  int choice;
  std::cin >> choice;

  std::cout << "\n\n";

  switch(choice){
    case 1:
    {
      std::cout << "How much would you like to deposit? ";
      double amount;
      std::cin >> amount;
      this->Deposit(amount);
      std::cout << "Deposit completed." << std::endl;
      break;
    }
    case 2:
    {
      std::cout << "How much would you like to withdraw? ";
      double amount;
      std::cin >> amount;
      bool withdrawn = this->Withdraw(amount);
      if(withdrawn){
        std::cout << "Withdrawal successful." << std::endl;
      }else{
        std::cout << "Withdrawal failed." << std::endl;
      }
      break;
    }
    case 3:
    {
      // TODO:
      break;
    }
    case 4:
    {
      // TODO:
      break;
    }
    default:
    {
      std::cout << "Invalid input." << std::endl;
      break;
    }
  }
}
