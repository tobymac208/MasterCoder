#ifndef Bank
#include <iostream>

class Bank {
private:
  double balance;
  std::string transactions[1000];
  int transaction_count;

  void Logout();
  void Login();
  void Deposit(double);
  bool Withdraw(double);
public:
  Bank();
  void BankMenu();
};
#endif
