#ifndef CLIENT_H
#define CLIENT_H

#include "../exceptions/exceptions.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  char *name;
  int registration;
} Client;

Client *createNewClient(char *name);

#endif
