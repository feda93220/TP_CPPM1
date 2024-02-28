#include <stdio.h>
#include <time.h>


int try_password(int password) {
    printf("%i\n", password);
    return 0;
}


int main() {
    clock_t t; 
    t = clock();

    for (int i = 0; i < 100000; i++) {
        try_password(i);
    }

    t = clock() - t; 
    double elapsed_time = ((double)t)/CLOCKS_PER_SEC;
    printf("Temps écoulé en C : %f secondes.\n", elapsed_time); 
}
