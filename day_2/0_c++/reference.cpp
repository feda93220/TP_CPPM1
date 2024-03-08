#include <iostream>
#include <cassert>

struct Person {
    int id;
};

void increment_by_pointer(int *x, Person *p) {
    // certaines syntaxes obligents les parenthese
    // comme (*x)[index] ou ici (*x)++; pour x+=1;
    *x += 1;
    p->id += 1;
}

void increment_by_reference(int &x, Person &p) {
    x++;
    p.id += 1;
}

int main() {
    int a = 1;
    Person p = Person{1};
    std::cout << "A vaut : " << a << " et id vaut: " << p.id << std::endl;

    increment_by_pointer(&a, &p); // Passe les addresses
    std::cout << "A vaut : " << a << " et id vaut: " << p.id << std::endl;

    increment_by_reference(a, p); // Passe l'objet
    std::cout << "A vaut : " << a << " et id vaut: " << p.id << std::endl;

    int variable(12);
    int &reference(variable);
    variable = 27;
    ++reference;
    std::cout << reference << "\n";

    auto pers = Person();
    auto pers_obj = &pers;
    std::cout << "pers obj: " << pers_obj << "\n";
    auto *pers_p = &pers_obj;
    std::cout << "pers p: " << pers_p << "\n";

    auto pers_p_obj = *pers_p;
    std::cout << "pers p obj: " << pers_p_obj << "\n";
    // assert();

    return 0;
}
