#include "cli/cli.h"

int main() {
  newClientDatabase(100);
  newAccountDatabase(100);

  cli();

  destroyClientDatabase();
  destroyAccountDatabase();
  return 0;
}
