#include <stdio.h>
#include <stdbool.h>

enum API_options {
    CREATE = 'c',
    READ = 'r',
    UPDATE = 'u',
    DESTROY = 'd'
};

int main() {
    int x = 1, y = 2;
    if (x < y) {printf("x est plus petit que y.\n");}
    else if (x > y) {printf("x est plus grand que y.\n");}
    else {printf("x est égal à y.\n");}

    char user_option = 'c';
    switch (user_option) {
        case CREATE:
            break;

        case READ:
            break;

        case UPDATE:
            break;

        case DESTROY:
            break;

        default:
            break;
    }
}
