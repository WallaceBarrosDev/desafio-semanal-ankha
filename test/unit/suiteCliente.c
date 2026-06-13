#include "suiteCliente.h"

// --- SUite Setupe --- //

int setupClient(void **state) {
  (void)state;
  resetException();
  return 0;
}

// --- Suite Client Name ---  //

void testValidName(void **state) {
  (void)state;
  Client *c = createNewClient("Wallace");
  assert_non_null(c);
  assert_int_equal(getException().code, EXCEPTION_NO_EXCEPTION);
  assert_string_equal(getException().message, "no exception");
}

void testInvalidName(void **state) {
  (void)state;
  Client *c = createNewClient("abc");
  assert_null(c);
  assert_int_equal(getException().code, EXCEPTION_INVALID_NAME);
  assert_string_equal(getException().message, "invalid name");
}

void testNullName(void **state) {
  (void)state;
  Client *c = createNewClient(NULL);
  assert_null(c);
  assert_int_equal(getException().code, EXCEPTION_ARGUMENT_IS_NULL);
  assert_string_equal(getException().message, "argument is null");
}


// --- Suite Client REGISTRATION --- // 

void testRegistrationSize8(void **state) {
  (void)state;
  Client *c = createNewClient("Wallace");
  assert_non_null(c);
  assert_true(c->registration >= 10000000 && c->registration <= 99999999);
}
