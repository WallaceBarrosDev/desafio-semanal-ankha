#ifndef CLIENT_H
#define CLIENT_H

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#include "bankAccont.h"

typedef struct Client Client;

struct Client {
  int id;
  int accountNumber;
  char *name;
  char *email;
  char *password;

  bool (*isValidPassword)(Client *client, char *inputPassword);
};

Client *newClient(char *name, char *email, char *password);

#endif
