#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char first_name[10];
    char last_name[10];
    printf("Nom et prénom : \n");
    scanf("%s%s", first_name, last_name);

    char *t = malloc(strlen(first_name) + 1);
    for (int i = 0, n = strlen(first_name); i < n + 1; i++) {
        t[i] = first_name[i];
    }
    t[0] = toupper(t[0]);

    printf("first_name : %s\n", first_name);
    printf("Capitalisé : %s\n", t);
}

