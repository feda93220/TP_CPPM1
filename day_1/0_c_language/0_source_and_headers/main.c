#include <stdio.h>
#include "headers.h"

int main(int argc, char const *argv[]) {
    printf("Arg count : %i\n.", argc);
    printf("Arg values : %p\n.", argv);
    return 0;
}
