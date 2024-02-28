#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SimpleUser {
    public:
        static const vector<string> actions;
};
const vector<string> SimpleUser::actions = {
    "login", "logout"
};


class User {
    static const vector<string> actions;
    public:
        void do_random_action() {
            srand(time(NULL));
            auto index = rand() % 2;
            cout << "Perform " << actions.at(index) << endl;
        }
        void make_action(int i) {
            cout << "Perform " << actions.at(i) << endl;
        }
        static const vector<string>&get_actions() {
            return actions;
        }
};
const vector<string> User::actions = {"login", "logout"};


int main() {
    cout << User::get_actions()[0] << endl;
    User u;
    u.make_action(0);
}
