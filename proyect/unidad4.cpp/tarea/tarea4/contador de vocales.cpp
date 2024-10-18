    #include <iostream>
#include <string>
using namespace std;

int main() {
    string oracion;
    cout << "Ingrese una oración: ";
    cin.ignore();
    getline(cin, oracion);

    int contador[5] = {0}; 

    for (char c : oracion) {
        switch (tolower(c)) {
            case 'a': contador[0]++; break;
            case 'e': contador[1]++; break;
            case 'i': contador[2]++; break;
            case 'o': contador[3]++; break;
            case 'u': contador[4]++; break;
        }
    }

    cout << "Cantidad de vocales:" << endl;
    cout << "a: " << contador[0] << endl;
    cout << "e: " << contador[1] << endl;
    cout << "i: " << contador[2] << endl;
    cout << "o: " << contador[3] << endl;
    cout << "u: " << contador[4] << endl;

    return 0;
}
