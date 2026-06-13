#ifndef SUITEINTEGRATIONAPI_H
#define SUITEINTEGRATIONAPI_H

#include <cmocka.h>
#include <stdio.h>

#include "../../src/domain/client.h"
#include "../../src/repository/writeClientToFile.h"

int setupIntegrationAPI(void **state);
int teardownintegrationapi(void **state);

void testWriteClientToFile(void **state);

#endif
