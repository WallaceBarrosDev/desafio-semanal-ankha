#ifndef SAVENEWCLIENT_H
#define SAVENEWCLIENT_H

#include <stdio.h>
#include "../domain/client.h"
#include "../repository/writeClientToFile.h"
#include "../exceptions/exceptions.h"

void saveNewClient(Client *client);

#endif
