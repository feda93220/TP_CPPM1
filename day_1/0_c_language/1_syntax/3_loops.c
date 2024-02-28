#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 1, y = 2;

    for (int i = 0; i < 50; i++) {
        printf("i = %i\n", i);
    }

    while (x < 10) {
        printf("%i est inférieur à 10.\n", x);
        x ++;
    }

    do {
        printf("y est inférieur à 20");
        y ++;
    }
    while (y < 20);
}
