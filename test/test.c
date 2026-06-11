#include <check.h>
#include "../src/exceptions/exceptions.h"
#include "../src/domain/client.h"

// --- Suite Client Name ---  //

START_TEST(test_valid_name) {
  Client *c = createNewClient("Wallace");
  ck_assert_ptr_nonnull(c);
  ck_assert_int_eq(getException().code, EXCEPTION_NO_EXCEPTION);
  ck_assert_str_eq(getException().message, "no exception");
}
END_TEST

START_TEST(test_invalid_name) {
  Client *c = createNewClient("abc");
  ck_assert_ptr_null(c);
  ck_assert_int_eq(getException().code, EXCEPTION_INVALID_NAME);
  ck_assert_str_eq(getException().message, "invalid name");
}
END_TEST

START_TEST(test_null_name) {
  Client *c = createNewClient(NULL);
  ck_assert_ptr_null(c);
  ck_assert_int_eq(getException().code, EXCEPTION_ARGUMENT_IS_NULL);
  ck_assert_str_eq(getException().message, "argument is null");
}
END_TEST

Suite *suite_client_name(void) {
  Suite *s = suite_create("suite_client_name");
  TCase *tc = tcase_create("core");

  tcase_add_test(tc, test_valid_name);
  tcase_add_test(tc, test_invalid_name);
  tcase_add_test(tc, test_null_name);

  suite_add_tcase(s, tc);
  return s;
}

int main(void) {
  
  Suite *s = suite_client_name();
  SRunner *sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  int failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  
  return (failed == 0) ? 0 : 1;
}
