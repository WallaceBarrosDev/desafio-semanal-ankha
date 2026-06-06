#include "database.h"
#include <stdio.h>

AccountDatabase *accountDatabase = NULL;

void newAccountDatabase(int max_size) {
  accountDatabase = malloc(sizeof(AccountDatabase));
  accountDatabase->accounts = calloc(max_size, sizeof(BankAccount));
  accountDatabase->max_size = max_size;
  accountDatabase->size = 0;
}

void destroyAccountDatabase() {
  free(accountDatabase->accounts);
  free(accountDatabase);
}

void addAccount(BankAccount *newAccount) {
  if (accountDatabase->size == accountDatabase->max_size) {
    printf("Banco de dados cheio\n");
    return;
  }

  newAccount->number = 2026000 + accountDatabase->size;

  accountDatabase->accounts[accountDatabase->size] = *newAccount;
  accountDatabase->size++;
}

BankAccount *getAccount(int accountNumber) {
  if(accountDatabase->size == 0) {
    printf("erro: banco de dados null");
    return NULL;
  }

  for (int i = 0; i < accountDatabase->size; i++) {
    if(accountDatabase->accounts[i].number == accountNumber) {
      return &accountDatabase->accounts[i];
    }
  } 

  printf("erro: conta não encontrada\n");
  return NULL;
}
