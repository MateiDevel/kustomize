#include <stdlib.h>
#include <unistd.h>
#include "getUser.h"

char *getUser()
{
    return getenv("USER");
}