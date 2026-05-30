#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

typedef enum {
  PAID = 1,
  LATE = 2,
} Status;

typedef struct {
  int id;
  char name[254];
  Status status;
} User;

typedef struct {
  User users[MAX];
  int size;
  int max_size;
} Databese;

Databese *db = NULL;

void open_database() {
  db = malloc(sizeof(Databese));
  db->max_size = MAX;
  db->size = 0;
}

void close_database() {
  free(db);
}

int generate_id() {
  return rand() % (100000 + 1);
}

User creat_new_user(char *name, Status status) {
  User new_user = {generate_id(), "", status};
  strcpy(new_user.name, name);
  return new_user;
}

void register_new_user(User user) {
  if (db->size >= MAX) {
    printf("Banco de dados cheio\n");
    return;
  }

  db->users[db->size] = user;
  db->size += 1;
}

void print_user(User user) {
  printf("Id: %d, Nome: %s, Situação Financeira: %s\n", 
    user.id, user.name, user.status == PAID ? "Paid" : "Late");
}

void show_users() {
  if (db->size <= 0) {
    printf("Banco de dados vazio\n");
    return;
  }
  for(int i = 0; i < db->size; i++) {
    print_user(db->users[i]);
  }
}


void get_user_by_id(int id) {
  if (db->size <= 0) {
    printf("Banco de dados vazio\n");
    return;
  }

  for(int i = 0; i < db->size; i++) {
    if (db->users[i].id == id) {
      print_user(db->users[i]);
      return;
    }
  }

  printf("Nao encontrado\n");
}

void remove_user_by_id(int id) {
  if (db->size <= 0) {
    printf("Banco de dados vazio\n");
    return;
  }

  for(int i = 0; i < db->size; i++) {
    if (db->users[i].id == id) {
      db->users[i] = db->users[db->size - 1];
      db->users[db->size - 1] = (User){0, "", PAID};
      db->size -= 1;
      return;
    }
  }

  printf("Nao encontrado\n");
}

int validate_input() {
  char input[255];
  char *temp;
  int valid_input;
  scanf("%s", input);
  
  valid_input = strtol(input, &temp, 10);

  if(*temp != '\0') {
    printf("Entrada invalida\n");
    return -1;
  }

  return valid_input;
}

void interface_new_user() {
  char name[255];
  Status status;

  printf("Nome: ");
  scanf("%s", name);

  printf("Status\n1 - Paid\n2 - Late\n> ");
  status = validate_input();
  printf("%d", status);

  if (status != PAID && status != LATE) {
    printf("Opcao invalida\n");
    interface_new_user();
    return;
  }

  User user = creat_new_user(name, status);
  register_new_user(user);
}

int alterate_status(int id) {
  for(int i = 0; i < db->size; i++) {
    if(id == db->users[i].id) {
      print_user(db->users[i]);
      printf("\nDigite o novo status do usuário\n1 - PAID\n2 - LATE\n");
      return i;
    }
  }

  return -1;
}

void show_relationship_status() {
  int q_paid = 0, q_late = 0;

  for(int i = 0; i < db->size; i++) {
    db->users[i].status == PAID ? q_paid++ : q_late++;
  }

  printf("Contas pagas: %d\n", q_paid);
  printf("Contas atrasadas: %d\n", q_late);
}

void interface() {
  int run = 1;
  printf("Bem vindo ao Sistema de Sintuação Cadastral\n");

  while(run) {
    printf("\n------------------------------\n");
    printf("\nSelecione uma opção\n\n");
    printf("1 - Cadastrar novo usuario\n");
    printf("2 - Listar todos os usuarios\n");
    printf("3 - Buscar usuario por id\n");
    printf("4 - Alterar sintuação financeira de um usuario por id\n");
    printf("5 - Relação de contas pagas e atrasadas\n");
    printf("6 - Remover usuario por id\n");
    printf("7 - Sair\n\n> ");
    
    int option = validate_input(), id, i;
    char name[255];
    
    switch(option) {
      case 1:
        printf("\033[2J\033[1H");
        interface_new_user();
      break;
      
      case 2:
        printf("\033[2J\033[1H");
        show_users();
      break;
      
      case 3:
        printf("\033[9A\033[0J");
        printf("Digite o id: ");
        id = validate_input();
        get_user_by_id(id);
      break;

      case 4:
        printf("\033[9A\033[0J");
        printf("Digite o id: ");
        id = validate_input();
        i = alterate_status(id);
        
        if (i < 0) {
          printf("Usuário não encontrado\n");
          break;
        };
        
        while(1) {
          Status novo_status = validate_input();
          
          if(novo_status != PAID && novo_status != LATE) {
            printf("Opcão invalida\n");
            continue;
          }
          
          printf("Status alterado\n");
          db->users[i].status = novo_status;
          get_user_by_id(id);
          break;
        }
      break;

      case 5:
        printf("\033[9A\033[0J");
        show_relationship_status();
      break;
      
      case 6:
        printf("\033[9A\033[0J");
        printf("Digite o id: ");
        id = validate_input();
        remove_user_by_id(id);
      break;
      
      case 7:
        run = 0;
      break;

      default:
        printf("\033[2J\033[1H");
        printf("Opcao invalida\n");
      break;
    }
  }
}

int main(void) {
  srand(time(NULL));

  open_database();

  interface();
  
  close_database();
}
