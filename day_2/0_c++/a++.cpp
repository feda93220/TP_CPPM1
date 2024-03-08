#include <stdio.h>
#include <iostream>


int main(int argc, char const *argv[]) {
    auto i(10);
    i += 1;

    // Affectation avant incrément
    auto b = i++;
    std::cout << b << "\n";
    std::cout << i << "\n";

    std::cout << std::endl;

    // Affectation après incrément
    auto f = ++i;
    std::cout << f << "\n";
    std::cout << i << "\n";
    return 0;
}
