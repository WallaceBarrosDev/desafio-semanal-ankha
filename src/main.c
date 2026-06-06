#include "cli/cli.h"
#include "database/database.h"
#include "models/client.h"

bool isValidPasswordMock() {
  return true;
}

int main() {
  newClientDatabase(100);
  newAccountDatabase(100);


  Client mock = {0, 0, "wallace", "@wallace", "123456", isValidPasswordMock};
  addClient(&mock , 2026000);

  BankAccount bankAccont = {2026000, 0.00};
  addAccount(&bankAccont);
  

  cli();

  destroyClientDatabase();
  destroyAccountDatabase();
  return 0;
}
