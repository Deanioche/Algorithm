#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
    char *B;
    char *buff;
    buff = strdup("\0");
    B = buff;
    if (!B)
        printf("!B\n");
    if (!*B)
        printf("!*B\n");

    system("leaks main");
    return 0;
}
