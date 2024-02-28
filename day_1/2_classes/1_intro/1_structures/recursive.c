typedef struct Person {
    int id;
    char last_name[64];
    char *first_name;
    struct Person *mother;
    struct Person *childs[];
} Person;
