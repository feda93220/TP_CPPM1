#include <cstdarg>
#include <iostream>


void print_args(int nb_arguments, ...) {
    va_list arguments_de_la_fonction;
    va_start(arguments_de_la_fonction, nb_arguments);
    for(int i = 0; i < nb_arguments; i++) {
        auto value = va_arg(arguments_de_la_fonction, char*);
        std::cout << "Argument " << i << ": " << value << std::endl;
    }
    va_end(arguments_de_la_fonction);
}

int main(int argc, char const *argv[]) {
    print_args(2, "toto", "un argument");
    return 0;
}
