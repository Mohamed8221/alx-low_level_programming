#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

int rand(void)
{
static int (*rand_orig)(void) = NULL;
if (!rand_orig)
rand_orig = dlsym(RTLD_NEXT, "rand");
return 9;
}
