#include <stdio.h>

int main() {
    int numbers[] = {
        1,
        2,
        3
    };
    numbers[5];

    printf("%i.\n", numbers[2]);
    printf("%i.\n", 2[numbers]);

    return 0;
}
