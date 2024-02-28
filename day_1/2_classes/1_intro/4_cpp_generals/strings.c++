#include <iostream>
#include <string>


int main() {
    std::string s = "Une phrase contenant plusieurs mots";

    for(auto c: s) {
        std::cout << c << "\n";
    }

    std::string word = "plusieurs";
    s.replace(
        s.find(word), word.size(), "plein de"
    );
    std::cout << s << std::endl;
}
