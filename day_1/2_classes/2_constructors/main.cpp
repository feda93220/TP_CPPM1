#include <iostream>
#include <string>

#include "lib.hpp"

using namespace std;



int main() {
    Person toto = Person(32, "Toto");
    toto.talk();

    Person bob(45, "Bob");

    cout << toto.age << endl;
    cout << bob.name << endl;

    return 0;
}






// #include <memory>
// template <class T>
// class Wrapper {
//     public:
//         Wrapper() noexcept : Wrapper{nullptr} {}
//         explicit Wrapper()(T* ptr) noexcept : m_ptr{ptr} {}
// };
