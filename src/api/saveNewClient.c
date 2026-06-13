#include "saveNewClient.h"

// TODO: implementar as fetures dos testes;
void saveNewClient(Client *client) {
// TODO: verificar se a struct Client não e null
  if(client == NULL) {
    throwException(EXCEPTION_ARGUMENT_IS_NULL, "Client is null");
    return;
  }
// TODO: verificar se o nome e null
  if(client->name == NULL) {
    throwException(EXCEPTION_INVALID_NAME, "invalid name");
    return;
  }
// TODO: verificar se a matricula e valida
  if (client->registration < 10000000 || client->registration > 99999999) {
    throwException(EXCEPTION_INVALID_REGISTRATION, "invalid registration");
    return;
  }

  writeClientToFile(client);
}
