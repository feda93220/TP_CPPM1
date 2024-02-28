// #include <iostream>
// #include <fstream>


// int main() {
//     FILE *index ;
//     char nom[30] ;
//     std::cout<< "Nom du fichier : " ;
//     std::cin >> nom ;
//     index = fopen(nom, "w");
// }

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("filename.txt");
    MyFile << "Ajouté au fichier!";
    MyFile.close();

    string myText;
    ifstream MyReadFile("filename.txt");
    while (getline (MyReadFile, myText)) {
        cout << myText;
    }
    MyFile.close();

    return 0;
}
