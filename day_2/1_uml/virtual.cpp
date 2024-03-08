#include <iostream>
using namespace std;

class Person {
    public:
        virtual void say_hi() {cout << "HI" << endl;}
        void no_polymorphism() {cout << "HI" << endl;}
};

class Client : public Person {
    public:
        int id;
        void say_hi() override {cout << "Client" << endl;}
        void no_polymorphism() {cout << "Client" << endl;}
};

class Admin : public Person {};

int main() {
    auto client = Client();
    auto admin = Admin();
    client.say_hi();
    admin.say_hi();

    Person p_obj = client;
    p_obj.say_hi(); // obj ne connait pas les membres de client, cela ne fonctionnera pas

    Person *p_pointer = &client; // on fait pointer p_pointer vers une instance
    // de client et non de person (tout en disant que c'est une Person de facon générique)
    p_pointer->say_hi(); // say_hi pointera maintenant vers la version Client de la fonction

    return 0;
}
