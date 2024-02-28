#include <iostream>

auto some_glob = &"DEBUG";

int main() {
    std::cout << some_glob << std::endl;
}
