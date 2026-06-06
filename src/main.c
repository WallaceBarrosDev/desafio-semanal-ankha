#include "cli/cli.h"
#include "database/database.h"

bool isValidPasswordMock() {
  return true;
}

int main() {
  newClientDatabase(100);
  newAccountDatabase(100);

  cli();

  destroyClientDatabase();
  destroyAccountDatabase();
  return 0;
}
