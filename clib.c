#include "clib.h"
#include "libwrap.h"
#include <stdio.h>

void cfunc(void *ab, int i)
{
    uf(ab);
    printf("%s: %i\n", __func__, i);
}
