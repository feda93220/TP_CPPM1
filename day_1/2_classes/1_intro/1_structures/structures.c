#include <stdio.h>
#include <string.h>


struct Person {
    int age;
    char name[30];
};


int main() {
    struct Person toto;
    toto.age = 32;
    strcpy(toto.name, "Toto");
    printf("I'm %s, %i years old.\n", toto.name, toto.age);


    // Assign values of variables at declaration time.
    struct Person bob = {
        42, "Bob"
    };
    printf("I'm %s, %i years old.\n", bob.name, bob.age);

    return 0;
}
