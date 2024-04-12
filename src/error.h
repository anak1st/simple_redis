// C++ header file
#include <cstdio>
#include <cstdlib>

// Linux headers
#include <errno.h>


static void msg(const char *msg) {
    fprintf(stderr, "%s\n", msg);
}


static void die(const char *msg) {
    int err = errno;
    fprintf(stderr, "[%d] %s\n", err, msg);
    abort();
}