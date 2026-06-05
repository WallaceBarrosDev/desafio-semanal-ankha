#include "database.h"

bool emailIsUnique(char *email);

ClientDatabase *clientDatabase = NULL;

void newClientDatabase(int max_size) {
  clientDatabase = malloc(sizeof(ClientDatabase));
  clientDatabase->clients = calloc(max_size, sizeof(Client));
  clientDatabase->max_size = max_size;
  clientDatabase->size = 0;
};

void destroyClientDatabase() {
  free(clientDatabase->clients);
  free(clientDatabase);
};

void freeClientDatabase() {
  free(clientDatabase);
};

void addClient(Client *newClient, int accountNumber) {
  if (clientDatabase->size == clientDatabase->max_size) {
    printf("Banco de dados cheio\n");
    return;
  }

  if (!emailIsUnique(newClient->email)) {
    printf("O email ja exsiste\n");
    return;
  }

  newClient->id = clientDatabase->size;
  newClient->accountNumber = accountNumber;

  clientDatabase->clients[clientDatabase->size] = *newClient;
  clientDatabase->size++;
};
  
bool emailIsUnique(char *email) {
  for (int i = 0; i < clientDatabase->size; i++) {
    if (strcmp(clientDatabase->clients[i].email, email) == 0) {
      return false;
    }
  }
  return true;
}
