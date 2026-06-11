#include "client.h"

Client *createNewClient(char *name) {
  if(name == NULL) { 
    throwException(EXCEPTION_ARGUMENT_IS_NULL, "argument is null"); 
    return NULL;
  }

  if(strlen(name) < 4) {
    throwException(EXCEPTION_INVALID_NAME, "invalid name");
    return NULL;
  }

  Client *client = malloc(sizeof(Client));
  client->name = malloc(strlen(name) + 1);

  strcpy(client->name, name);

  return client;
}
