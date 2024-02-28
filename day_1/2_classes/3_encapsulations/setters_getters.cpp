#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        int age;
        string name;

    public:
        Person(int age, string name): age(age), name(name) {}

        int getAge() {
            return age;
        }

        void setAge(int new_age) {
            if (age > 0) {age = new_age;}
        }
};



int main() {
    Person toto(32, "Toto");
    cout << toto.getAge() << endl;

    Person bob(45, "Toto");

    toto.setAge(33);
    cout << toto.getAge() << endl;

    cout << bob.getAge() << endl;
}
