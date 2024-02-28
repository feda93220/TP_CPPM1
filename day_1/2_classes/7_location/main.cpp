#include <iostream>

#include "lib.hpp"

using namespace std;


int main() {
    Person toto;
    Position position = toto.get_position();
    cout << position.x << endl;
}
