#include <iostream>


class Counter {
    public:
        virtual void reset() = 0;
        virtual void operator ++() = 0;
        virtual void operator ()() = 0;
};


class IntCounter: Counter {
    int value;

    public:
        IntCounter(int value): value(value) {}

        void reset() override {
            value = 0;
        }
        void operator ++() override {
            value++;
        }
        void operator ()() override {
            std::cout << "Value: " << value << "\n";
        }
};

class CharCounter: Counter {
    char value;

    public:
        CharCounter(char value): value(value) {}

        void reset() override {
            value = 'a';
        }
        void operator ++() override {
            value++;
        }
        void operator ()() override {
            std::cout << "Value: " << value << "\n";
        }
};


int main() {
    auto int_counter = IntCounter(0);
    for (int i = 0; i < 10; i++) {
        ++int_counter;
        int_counter();
    }

    auto char_counter = CharCounter('a');
    for (int i = 0; i < 10; i++) {
        ++char_counter;
        char_counter();
    }

    int_counter.reset();
    int_counter();

    char_counter.reset();
    char_counter();

    auto a = 1, b = 0, c = 0;
    std::cout << a << " " << b << " " << c << "\n";
    b = a++;
    std::cout << a << " " << b << " " << c << "\n";
    c = ++b;
    std::cout << a << " " << b << " " << c << "\n";

    return 0;
}
