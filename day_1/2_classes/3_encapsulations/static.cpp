#include <iostream>
#include <memory>
using namespace std;

class Component {};

class Widget {
    public:
        static unique_ptr<Component> Home;
        unique_ptr<Component> safe;
        Component* unsafe;
        Widget() {
            safe = make_unique<Component>();
            unsafe = new Component;
        }
};
unique_ptr<Component> Widget::Home = make_unique<Component>();

int main() {
    auto obj = make_unique<Widget>();
    obj->~Widget();
    cout << "Pointeur uniqueptr -> " << obj.get()->safe.get() << endl;
    cout << "Pointeur classique -> " << obj.get()->unsafe << endl;
    cout << "Attribut de classe -> " << Widget::Home.get() << endl;
    cout << "obj a accès à Home -> " << obj.get()->Home.get() << endl;
    return 0;
}
