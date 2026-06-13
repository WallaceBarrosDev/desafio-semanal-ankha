#include "suiteIntegrationAPI.h"

int setupIntegrationAPI(void **state) {
    (void)state;
    remove("test_data/clients.csv");
    return 0;
}

int teardownintegrationapi(void **state) {
  (void)state;
  remove("test_data/clients.csv");
  return 0;
}

void testWriteClientToFile(void **state) {
    (void)state;
    Client client = { .name = "Wallace", .registration = 12345678 };
    writeClientToFile(&client);

    FILE *f = fopen("test_data/clients.csv", "r");
    assert_non_null(f);

    char line[256];
    fgets(line, sizeof(line), f);
    fgets(line, sizeof(line), f);
    fclose(f);

    assert_string_equal(line, "Wallace,12345678\n");
}
