#include <iostream>
#include <vector>


void show_table_1(std::vector<int> table) {
    for (auto i = 0; i < table.size(); i++) {
        std::cout << table[i] << "\n";
    }
    std::cout << std::endl;
}

void show_table_2(std::vector<int> table) {
    for (std::vector<int>::iterator pos = table.begin(); pos < table.end(); ++pos) {
        std::cout << *pos << "\n";
    }
}

auto show_table_3(std::vector<int> table) {
    for (auto pos = table.begin(); pos < table.end(); ++pos) {
        std::cout << *pos << "\n";
    }
}

auto show_table_4(std::vector<int> table) {
    for (const auto &elem: table) {
        std::cout << elem << "\n";
    }
}

int main() {
    auto length(3), value(1);
    std::vector<int> tableau(length, value);
    tableau.push_back(8);
    tableau.pop_back();
    show_table_4(tableau);
    return 0;
}
