#include <iostream>
using namespace std;

class User {
    private:
        int id;
        bool _is_admin;

    public:
        User(int id) : id(id) {_is_admin = false;}
        bool is_admin() {return _is_admin;}
        void set_admin(bool is_admin) {_is_admin = is_admin;}
        void login() {cout << "Connecté en tant que client." << endl;}
};

class Admin : public User {
    public:
        Admin(int id) : User(id) {set_admin(true);}
        void login() {cout << "Connecté en tant qu'admin." << endl;}
};

class Client : public User {
    public:
        Client(int id) : User(id) {}
};

int main() {
    Admin user_1(0);
    Client user_2(1);
    user_1.login();
    user_2.login();
    cout << "User 1 est admin? : " << user_1.is_admin() << endl;
    cout << "User 2 est admin? : " << user_2.is_admin() << endl;
    return 0;
}
