#include <iostream>

class Person {
    private:
        int _age;
        auto clean() {
            if (_age < 0) {
                throw "L'age ne peut être négatif.";
            }
        }

    public:
        Person(int age) : _age(age) {clean();}
};

int main() {
    Person p(-1);
    return 0;
}
