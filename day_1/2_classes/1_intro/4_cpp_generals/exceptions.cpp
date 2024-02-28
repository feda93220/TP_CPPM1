#include <iostream>
#include <cassert>

#define NAMECONST MY_CONSTANT_NAME
#define SCREENRATIO 3.5
#define getrandom(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))

int main() {
    try {
        int age = 15;
        assert(age > 18);

        if (age >= 18) {}
        else if(age == 18) {throw 400;}
        else {throw "LessThan18";}
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    catch (int error_code) {
        std::cerr << "Erreur " << error_code << std::endl;
    }
    catch (char *error_name) {
        std::cerr << "Erreur " << error_name << std::endl;
    }
}
