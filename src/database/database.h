#ifndef DATABASE_H
#define DATABASE_H

#include <stdbool.h>

#include "../models/client.h"
#include "../models/bankAccont.h"

typedef struct ClientDatabase ClientDatabase;

struct ClientDatabase {
  Client *clients;
  int size;
  int max_size;
};

void newClientDatabase(int max_size);
void destroyClientDatabase();
void addClient(Client *newClient, int accountNumber);

typedef struct AccountDatabase AccountDatabase;

struct AccountDatabase {
  BankAccount *accounts;
  int size;
  int max_size;
};

void newAccountDatabase(int max_size);
void destroyAccountDatabase();
void addAccount(BankAccount *newAccount);

#endif
