#include <iostream>
#include <memory>
using namespace std;

class Person {
    public:
        virtual void say_hi() {cout << "HI" << endl;}
};

class Client : public Person {
    public:
        void say_hi() {cout << "Client" << endl;}
};

class Admin : public Person {};


int main() {
    auto c = make_unique<Client>();
    auto a = make_unique<Admin>();
    c.get()->say_hi();
    a.get()->say_hi();
}
