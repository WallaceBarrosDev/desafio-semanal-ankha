#ifndef suiteCliente_h
#define suiteCliente_h

#include <cmocka.h>
#include "../src/domain/client.h"

int setupClient(void **state);
void testValidName(void **state);
void testInvalidName(void **state);
void testNullName(void **state);
void testRegistrationSize8(void **state);

#endif
