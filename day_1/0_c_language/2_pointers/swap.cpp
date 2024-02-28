#include <iostream>


void swap_1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swap_2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int a(0);
    int b(1);
    std::cout << "A vaut : " << a << " et B vaut : " << b << std::endl;

    swap_1(a, b);
    std::cout << "A vaut : " << a << " et B vaut : " << b << std::endl;

    swap_2(&a, &b);
    std::cout << "A vaut : " << a << " et B vaut : " << b << std::endl;


    int c(0);
    int d(1);
    std::cout << "C vaut : " << c << " et D vaut : " << d << std::endl;
    std::swap(c, d);
    std::cout << "C vaut : " << c << " et D vaut : " << d << std::endl;


    char char_a('a');
    char char_b('b');
    std::cout << "char_a vaut : " << char_a << " et char_b vaut : " << char_b << std::endl;
    std::swap(char_a, char_b);
    std::cout << "char_a vaut : " << char_a << " et char_b vaut : " << char_b << std::endl;
}
