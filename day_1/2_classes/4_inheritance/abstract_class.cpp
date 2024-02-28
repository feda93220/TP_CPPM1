#include <iostream>
#include <string>

using namespace std;


class Shape {
    public:
    	virtual int get_area() = 0;
};


class Rectangle : public Shape {
	int length;
    int height;

    public:
        Rectangle(int length, int height): length(length), height(height) {}

    	int get_area() {
            return length * height;
        }
};


// int main(void) {
// 	Rectangle rect(1, 2);
// 	cout << rect.get_area() << endl;
// 	return 0;
// }


class CreditCard {
    public:
        CreditCard(string number) : _number(number) {}
        string number() {return _number.substr(8);}

    private:
        string _number;
};


int main() {
    CreditCard cr("012345678910");
    cout << cr.number() << endl;
    return 0;
}
