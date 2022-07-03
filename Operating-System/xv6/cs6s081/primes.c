#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    int c = fork();
    if (c > 0) {
        printf("%d\n", getpid());
    } else if (c == 0) {
        printf("%d\n", getpid());
    } else {
        fprintf(2, "%s\n", "fork error");
        exit(1);
    }

    exit(0);
}
