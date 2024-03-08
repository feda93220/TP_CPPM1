#include <iostream>

struct Person {
    char name[64];
    int id;
    void person_function() {
        std::cout << "P id v1: " << this->id << "\n";};

    void pass_the_obj(Person &self) {
        std::cout << "P id v2: " << self.id << "\n";
    };
};

void some_function() {}

Person *make_person() {
    Person p1 = Person();
    std::cout << "address person avant return: " << &p1 << std::endl;
    return std::move(&p1);
}


int main() {
    Person *person_values = make_person();
    std::cout << "address person apres return: " << person_values << std::endl;


    auto person_cout = 3;
    Person people[person_cout];
    Person *person = people;
    std::cout << "Taille d'une personne: " << sizeof(Person) << "\n";
    std::cout << "\n";
    for (int i = 0; i < person_cout; i++) {
        person->id = i;

        std::cout << "Addr people[" << i << "]: " << &i[people] << "\n";
        std::cout << "Addr person : " << person << "\n";
    }
    void (Person::*p_func)() = &Person::person_function;
    (*(person).*p_func)();
    std::cout << "Addr fonction membre: " << &p_func << "\n";

    auto other_pers = new Person;
    void (Person::*pointer_to_same_func)() = &Person::person_function;
    (*(other_pers).*pointer_to_same_func)();
    std::cout << "Addr nouvelle personne: " << other_pers << "\n";
    std::cout << "Addr même fnc autre instance: " << &pointer_to_same_func << "\n";

    void (Person::*other_func)(Person&) = &Person::pass_the_obj;
    (*(person).*other_func)(*person);
    std::cout << "Addr pass_the_obj: " << &other_func << "\n";

    person += 1; // bouge le pointeur à la prochaine personne. La
    // machine sait de combien bouger car le type Person est défini
    std::cout << "\n";

    auto *function_pointer = &some_function;
    std::cout << "function pointer: " << &function_pointer << "\n";
    auto *function_pointer2 = &some_function;
    std::cout << "function pointer 2: " << &function_pointer2 << "\n";
    return 0;
}



