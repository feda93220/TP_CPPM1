#include <stdio.h>

int main(int argc, char const *argv[]) {
    int birthdate;
    printf("Entrez votre année de naissance : \n");
    scanf("%i", &birthdate);
    printf("Année de naissance : %i.\n", birthdate);
    int age = 2024 - birthdate;
    printf("Vous avez %i ans.\n", age);

    char name[16];
    char favorite_color[16];
    printf("Nom et couleur favorite : \n");
    fgets("%s%s", name, favorite_color);
    return 0;
}
