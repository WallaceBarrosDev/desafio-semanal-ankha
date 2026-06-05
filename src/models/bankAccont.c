#include "bankAccont.h"

float withdraw(BankAccount *account, float value);
void deposit(BankAccount *account, float value);
float print_balance(BankAccount *account);

BankAccount *newBankAccount(int clientId) {
  BankAccount *bankAccount = malloc(sizeof(BankAccount));
  bankAccount->number = 0;
  bankAccount->balance = 0;

  bankAccount->withdraw = withdraw;
  bankAccount->deposit = deposit;
  bankAccount->print_balance = print_balance;
  return bankAccount;
}

float withdraw(BankAccount *account, float value) {
  if (account->balance < value) {
    printf("Saldo insuficiente\n");
    return -1.00;
  }
  account->balance -= value;
  return account->balance;
}

void deposit(BankAccount *account, float value) {
  account->balance += value;
}

float print_balance(BankAccount *account) {
  return account->balance;
}

void free_bankAccount(BankAccount *bankAccount) {
  free(bankAccount);
}
