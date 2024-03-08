#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <fstream>

class Person {
    static std::vector<Person*> _objects;

    private:
        int _id;
        std::string _name;

        int getNewPersonId() {
            if (_objects.empty()) {return 1;}
            return _objects.back()->_id + 1;
        }

    public:
        Person(std::string name) : _name(name) {
            _id = getNewPersonId();
            _objects.push_back(this);
        }

        static Person *get(int id) {
            for (auto &person: _objects) {
                if (person->id() == id) {
                    return person;
                }
            }
            return nullptr;
        }

        int id() {return _id;}
        std::string name() {return _name;}

        void update(std::string name) {
            _name = name;
        }

        void destroy() {
            // Implement your destroy logic here
        }

        void save() {
            std::ofstream MyFile("filename.txt");
            MyFile << "Ajouté au fichier!";
            MyFile.close();
        }
};
std::vector<Person*> Person::_objects;


void some_buggy_api_to_change_name(int id, std::string new_name) {
    auto p = *Person::get(id); // on déréférence avec *, on récupère donc une copie
    p.update(new_name); // on update une copie locale.
}

void some_api_to_change_name(int id, std::string new_name) {
    auto p = Person::get(id);
    p->update(new_name);
}


int main(int argc, char const *argv[])
{
    auto p = Person("toto");

    some_buggy_api_to_change_name(p.id(), "will no work");
    std::cout << p.name() << std::endl;

    some_api_to_change_name(p.id(), "something new");
    std::cout << p.name() << std::endl;
    return 0;
}
