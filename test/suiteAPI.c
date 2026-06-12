#include "suiteAPI.h"

// --- Setup Suite --- //

int setupAPI(void **state) {
  (void)state;
  resetException();
  return 0;
}

// --- mock fuctions --- //

void writeClientToFile(Client *client)
{
    function_called();
    check_expected_ptr(client);
}

// --- Suite saveNewClient --- //

void testSaveValidClient(void **state) {
    (void)state;
    Client client = { .name = "Wallace", .registration = 12345678 };
    
    expect_function_call(writeClientToFile);
    expect_value(writeClientToFile, client, &client);
    
    saveNewClient(&client);
    
    assert_int_equal(getException().code, EXCEPTION_NO_EXCEPTION);
}

void testSaveNullClient(void **state) {
    (void)state;
    saveNewClient(NULL);
    assert_int_equal(getException().code, EXCEPTION_ARGUMENT_IS_NULL);
}
