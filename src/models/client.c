#include "client.h"

bool nameIsValid(char *name);
bool emailIsValid(char *email);
bool passwordIsValid(char *password);

Client *newClient(char *name, char *email, char *password) {
  Client *client = malloc(sizeof(Client));
  
  if (!nameIsValid(name)) {
    printf("Nome inválido, o nome deve ter pelo menos 6 caracteres\n");
    free(client);
    return NULL;
  }

  if (!emailIsValid(email)) {
    printf("Email inválido, o email deve conter um @\n");
    free(client);
    return NULL;
  }

  if (!passwordIsValid(password)) {
    printf("Senha inválida, a senha deve ter pelo menos 6 caracteres\n");
    free(client);
    return NULL;
  }

  client->name = name;
  client->email = email;
  client->password = password;

  return client;
}

void free_client(Client *client) {
  free(client);
}

bool nameIsValid(char *name) {
  return strlen(name) >= 6;
}

bool emailIsValid(char *email) {
  return strchr(email, '@') != NULL;
}

bool passwordIsValid(char *password) {
  return strlen(password) >= 6;
}
