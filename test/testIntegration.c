#include <cmocka.h>

#include "integration/suiteIntegrationAPI.h"

int main(void) {
  const struct CMUnitTest tests[] = {
    cmocka_unit_test_setup_teardown(testWriteClientToFile, setupIntegrationAPI, teardownintegrationapi),
  };

  return cmocka_run_group_tests(tests, NULL, NULL);
}
