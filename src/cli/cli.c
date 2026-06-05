#include "cli.h"

void abrir_conta();

void cli() {
  int option;

  while(1) {
    printf("Sistema de conta bancária\n");
    printf("1 - Abrir uma conta\n");
    printf("> ");
    scanf("%d", &option);

    switch(option) {
      case 1: abrir_conta(); break;
      default: printf("Opção inválida\n"); break;
    }
  }
}

void abrir_conta() {
  while(1) {
    char name[MAX_STRING_SIZE];
    char email[MAX_STRING_SIZE];
    char password[MAX_STRING_SIZE];

    printf("Nome: ");
    scanf("%s", name);
    printf("E-mail: ");
    scanf("%s", email);
    printf("Senha: ");
    scanf("%s", password);

    Client *client = newClient(name, email, password);
    if (client == NULL) continue;

    BankAccount *bankAccount = newBankAccount(client->id);
    if (bankAccount == NULL) continue;

    addAccount(bankAccount);
    addClient(client, bankAccount->number);

    break;
  }
}


























