#include <iostream>

int main(int argc, char const *argv[]) {
    std::cout << "argument count : " << argc << std::endl;
    for (int i; i < argc; i++) {
        std::cout << "argument " << i << " value : " << argv[i] << std::endl;
    }
    return 0;
}
