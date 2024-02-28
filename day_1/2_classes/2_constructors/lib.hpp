#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        int age;
        string const name;
        void talk();

        Person(int age, string name): age(age), name(name) {}
        ~Person() {cout << "Deleting " << name << endl;}
};

void Person::talk() {
    cout << "I'm " << name << ", " << age << " years old." << endl;
};
