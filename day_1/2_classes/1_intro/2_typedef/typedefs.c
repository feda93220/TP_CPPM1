#include <stdio.h>


typedef struct {
    int age;
    char name[30];
} Person;


int talk(Person person) {
    printf("I'm %s, %i years old.\n", person.name, person.age);
    return 0;
};


int main() {
    Person bob = {
        42, "Bob"
    };
    talk(bob);

    return 0;
}
