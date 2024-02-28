#include <iostream>

using namespace std;


int main() {
    char *text = "Warning but compiles";
    cout << text << endl;

    int ageUtilisateur = 16;
    int &maVariable = ageUtilisateur;
    cout << "maVariable : " << maVariable << endl;
    cout << "&maVariable : " << &maVariable << endl;

    int *pointer = &ageUtilisateur;
    cout << "pointer : " << pointer << endl;
    cout << "&pointer : " << &pointer << endl;
    cout << "*pointer : " << *pointer << endl;

    int mavariable2 = ageUtilisateur;
    cout << "maVariable2 : " << mavariable2 << endl;

    return 0;
}
