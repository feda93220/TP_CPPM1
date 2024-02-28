#include <iostream>

#define NAMECONST "MY_CONSTANT_NAME"
#define SCREENRATIO 3.5
#define getrandom(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))

int main() {
    int a = getrandom(1, 10);
    int b = SCREENRATIO;
    std::cout << SCREENRATIO << NAMECONST << getrandom(1, 10) << std::endl;
}
