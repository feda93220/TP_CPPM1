#include <string.h>
#include <iostream>
#include <memory>


template <typename T>
class Counter {
    T *value;

    public:
        Counter(T *value):
            value(value) {}

        void reset () {
            *value = 0;
        }
        void operator ()() {
            std::cout << "Value: " << *value << "\n";
        }
        T operator += (int increment) {
            *value += increment;
            return *value;
        }
};

// Déclinaison tu templace Counter spécialisé pour les char
template <>
class Counter<char> {
    char *value;

    public:
        Counter(char *value): value(value) {}
        void reset() {
            *value = 'a';
        }
        void operator += (int increment) {
            *value += increment;
        }
        void operator ()() {
            std::cout << "Value: " << *value << "\n";
        }
};

int main(int argc, char const *argv[]) {
    auto val = 'c';
    Counter<char> char_counter(&val);
    char_counter += 1;
    char_counter();
    char_counter.reset();
    char_counter();


    auto some_char = 'a';
    auto some_value = 1;
    Counter<int> counter(&some_value);
    for (auto i(0); i < 10; i++) {
        counter += 1;
        counter();

        char_counter += 1;
        char_counter();
    }
    counter.reset();
    counter();
    char_counter.reset();
    char_counter();
    return 0;
}
