#ifndef BACKACCONT_H
#define BACKACCONT_H

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

typedef struct BankAccount BankAccount;

struct BankAccount {
  int number;
  float balance;  
  float (*withdraw)(BankAccount *account, float value);
  void (*deposit)(BankAccount *account, float value);
  float (*print_balance)(BankAccount *account);
};

BankAccount *newBankAccount(int clientId);

#endif
