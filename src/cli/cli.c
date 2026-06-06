#include "cli.h"
#include <stdio.h>

void abrirConta();
void entrarConta();
void secao(Client *client);

void cli() {
  int option;

  while(1) {
    printf("Sistema de conta bancária\n");
    printf("1 - Abrir uma conta\n");
    printf("2 - Entrar na conta\n");
    printf("3 - Sair\n");
    printf("> ");
    scanf("%d", &option);

    switch(option) {
      case 1: abrirConta(); break;
      case 2: entrarConta(); break;
      case 3: printf("finalizando ...\n"); return;
      default: printf("Opção inválida\n"); break;
    }
  }
}

void abrirConta() {
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

    BankAccount *bankAccount = newBankAccount();
    if (bankAccount == NULL) continue;

    addAccount(bankAccount);
    addClient(client, bankAccount->number);

    break;
  }
}

void entrarConta() {
  char inputEmail[MAX_STRING_SIZE];
  char inputPassword[MAX_STRING_SIZE];

  printf("E-mail: ");
  scanf("%s", inputEmail);
  printf("Senha: ");
  scanf("%s", inputPassword);

  Client *client = getClientByEmail(inputEmail);
  if (client == NULL) return;

  if (client->isValidPassword(client, inputPassword)) {
    secao(client);
  }
}

void consultarSaldo(BankAccount *account);

void secao(Client *client) {
  BankAccount *account = getAccount(client->accountNumber);
  int option;

  printf("Bem-vindo, %s\n", client->name);
  while(1) {
    printf("1 - Consultar saldo\n");
    printf("2 - Sair da conta\n");
    scanf("%d", &option);

    switch(option) {
      case 1: consultarSaldo(account); break;
      case 2: printf("Saido de sua conta ...\n"); return;
      default: printf("Opção invalida\n"); break;
    }
  }
}

void consultarSaldo(BankAccount *account) {
  if (account == NULL) printf("conta não carregada\n");
  printf("Saldo: %.2f\n", account->balance);
}
