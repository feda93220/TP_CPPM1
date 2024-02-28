#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("phonebook.csv", "a");
    char *name = "Thomas";
    char *number = "0123456789";
    fprintf(file, "%s,%s\n", name, number);
    fclose(file);

    return 0;
}
