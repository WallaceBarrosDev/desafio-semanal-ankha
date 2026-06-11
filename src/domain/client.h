#ifndef CLIENT_H
#define CLIENT_H

#include "../exceptions/exceptions.h"
#include <string.h>

typedef struct {
  char *name;
  int registration;
} Client;

Client *createNewClient(char *name);

#endif
