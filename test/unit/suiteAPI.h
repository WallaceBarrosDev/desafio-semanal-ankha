#ifndef SUITEAPI_H
#define SUITEAPI_H

#include <cmocka.h>
#include "../../src/api/saveNewClient.h"

int setupAPI(void **state);
void testSaveValidClient(void **state);
void testSaveNullClient(void **state);
void testSaveClientWithoutRegistration(void **state);
void testSaveClientWithoutName(void **state);

#endif
