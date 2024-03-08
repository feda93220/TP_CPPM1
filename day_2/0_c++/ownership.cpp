#include <stdio.h>
#include <memory>
#include <vector>
using namespace std;

// https://en.cppreference.com/w/cpp/memory/unique_ptr

struct Thing {
    char name[64];
    vector<char> memory_blocks; // 8

    Thing(int size): memory_blocks(size) { // 16
        for (auto i(0); i < size; i++) {
            memory_blocks[i] = i + '0';}};
};

class Person {
    unique_ptr<Thing> company = make_unique<Thing>(25);
    Thing *book = new Thing(10000000);

    public:
        void swap_company(Person &other) {
            // company est un unique_pointer
            // unique_ptr est un template qui
            // vient avec des fonctionnalités
            // dont certaines pour gérer l'ownership
            company.swap(other.company);
        };
        void sell_company(Person &other) {
            other.company = move(company);
            company = make_unique<Thing>(0);
        };
        void swap_book(Person &other) {
            auto temp = other.book;
            book = other.book;
            other.book = temp;
            delete temp;
            temp = nullptr;
        };
        Thing &get_book_address() {return *book;} // lvalue
        Thing get_book_copy() {return *book;} // rvalue
};


Person *make_person() {
    auto p = new Person();
    auto temp_p = Person{};
    p->swap_company(temp_p);

    auto real_pointer = temp_p.get_book_address();

    Thing &&pointer_to_a_book_copy_1 = temp_p.get_book_copy();
    Thing &&pointer_to_a_book_copy_2 = temp_p.get_book_copy();
    auto book_copy_1 = temp_p.get_book_copy();
    auto book_copy_2 = temp_p.get_book_copy();

    printf("Taille d'un livre : %i\n", sizeof(Thing));
    printf("Taille d'une copie : %i\n", sizeof(Thing&&));
    printf("Taille d'une reference : %i\n", sizeof(Thing&));
    printf("Taille d'un pointeur : %i\n", sizeof(Thing*));

    printf("Book copy 1 addr : %p\n", book_copy_1);
    printf("Book copy 2 addr : %p\n", book_copy_2);
    printf("Pointer to book copy 1 : %p\n", &pointer_to_a_book_copy_1);
    printf("Pointer to book copy 2 : %p\n", &pointer_to_a_book_copy_2);
    printf("Real book addr : %p\n", &(real_pointer));
    return p;
};


int main() {
    auto p1 = make_unique<Person>();
    auto p2 = make_unique<Person>();

    printf("P1 company addr : %p\n", &(p1)->get_book_address());
    printf("P2 company addr : %p\n", &(p2)->get_book_address());
    p1->sell_company(*p2);
    printf("P1 company addr : %p\n", &(p1)->get_book_address());
    printf("P2 company addr : %p\n", &(p2)->get_book_address());
    p1->swap_book(*p2);

    auto p5 = make_person();
    auto p6 = make_person();
    p5->swap_book(*p6);



    return 0;
}
