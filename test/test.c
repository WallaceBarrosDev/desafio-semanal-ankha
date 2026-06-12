#include <cmocka.h>

#include "suiteCliente.h"
#include "suiteAPI.h"

int main(void) {
  const struct CMUnitTest tests[] = {
    cmocka_unit_test_setup(testValidName, setupClient),
    cmocka_unit_test_setup(testInvalidName, setupClient),
    cmocka_unit_test_setup(testNullName, setupClient),
    cmocka_unit_test_setup(testRegistrationSize8, setupClient),
    cmocka_unit_test_setup(testSaveValidClient, setupAPI),
    cmocka_unit_test_setup(testSaveNullClient, setupAPI)
  };

  return cmocka_run_group_tests(tests, NULL, NULL);
}
