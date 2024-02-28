#include <stdio.h>


void swap_1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap_2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1;
    int b = 2;
    printf("A vaut %i et B vaut %i.\n", a, b);

    // Ne fonctionne pas car copies envoyées
    swap_1(a, b);
    printf("A vaut %i et B vaut %i.\n", a, b);

    // Adresses et valeurs
    // int *adress_A = &a;
    // printf("L'adresse mémoire de A est %p.\n", adress_A);
    // int value_A = *adress_A;
    // printf("La valeur dans ce bloc mémoire est %i.\n", value_A);

    // int *adress_B = &b;
    // printf("L'adresse mémoire de B est %p.\n", adress_B);
    // int value_B = *adress_B;
    // printf("La valeur dans ce bloc mémoire est %i.\n", value_B);

    // // On envoie les adresses
    // swap_2(&a, &b);
    // printf("A vaut %i et B vaut %i.\n", a, b);


    // char char_a = 'a';
    // char char_b = 'b';
    // printf("char_a vaut %c et char_b vaut %c.\n", char_a, char_b);
    // swap_2(&char_a, &char_b);
    // printf("char_a vaut %c et char_b vaut %c.\n", char_a, char_b);
    return 0;
}




void swap_3(void* a, void* b, int memory_size_of_swapped_elem) {
    int a = 1;
}
