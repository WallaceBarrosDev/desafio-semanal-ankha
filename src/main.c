#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

typedef enum {
  PAID,
  LATE
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
    return;
  }

  db->users[db->size] = user;
  db->size += 1;
}


int main(void) {
  srand(time(NULL));

  open_database();

  User user = creat_new_user("Wallace", PAID);
  register_new_user(user);
  user = creat_new_user("Felipe", LATE);
  register_new_user(user);

  for(int i = 0; i < db->size; i++) {
    printf("Id: %d, Nome: %s, Situação Financeira: %s\n", 
        db->users[i].id, db->users[i].name, !db->users[i].status ? "Paid" : "Late");
  }
  
  close_database();
}
