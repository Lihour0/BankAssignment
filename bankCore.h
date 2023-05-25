#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Customer {
  std::string id;
  std::string name;
};

struct Account {
  enum class Type {
    Customer, Admin
  };
  std::string username;
  std::string password;
  Customer customerInfo;
  Type type;
  double balance{0.0};
};

class AccountHandler {
private:
  Account account;
  std::vector<Account> Account;
public:
  void createAccount();
  void removeAccount();
  auto updateAccount();
  auto getAccount();

};

class Display {
public:
  Display(AccountHandler& accHandler);

  void loginMenu();
  void mainMenu();
  void accountDetail();
  void transaction();
  void wi();
private:
  AccountHandler& account;
};
