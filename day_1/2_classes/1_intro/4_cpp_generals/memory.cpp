#include <iostream>
#include <memory>


void unsafe_pointer() {
    int* ptr = new int(10);
    if (*ptr == 10) {throw;}
    delete ptr;
}

void safe_pointer() {
    auto ptr = std::make_unique<int>(10);
    if (*ptr == 10) {throw;}
}
class Person {};

int main() {
    int *pointeur(0);
    pointeur = new int;
    delete pointeur;
    pointeur = 0;

    auto unique_ptr = std::make_unique<int>(10);
    auto shared_ptr = std::make_shared<int>(10);
    int * ptr_i = unique_ptr.get();
    std::cout << shared_ptr.use_count() << "\n";
    {
        auto shared_ptr_2 = shared_ptr;
        std::cout << shared_ptr_2.use_count() << '\n';
    }
    std::cout << shared_ptr.use_count() << "\n";
    std::cout<< *shared_ptr << "\n";
}
