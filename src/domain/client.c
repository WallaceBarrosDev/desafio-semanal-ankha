#include "client.h"

int generateRegistration();

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
  client->registration = generateRegistration();

  return client;
}

int generateRegistration() {
  time_t *timer = malloc(sizeof(time_t));
  time(timer);
  struct tm *tm = localtime(timer);
  int year = tm->tm_year + 1900;

  srand(time(NULL));
  int alt = rand() % 10000;

  return year*10000+alt;
} 
