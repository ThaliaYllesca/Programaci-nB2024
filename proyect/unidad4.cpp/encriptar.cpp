 #include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre = "Diana";
    int desplazamiento = 3;
    string encriptado = nombre;
    string desencriptado = nombre;

    // Encriptar 
    for (int i = 0; i < 5; i++) { 
        if (nombre[i] >= 'A' && nombre[i] <= 'Z') {
            encriptado[i] = char(int('A' + (nombre[i] - 'A' + desplazamiento) % 26));
        } else if (nombre[i] >= 'a' && nombre[i] <= 'z') {
            encriptado[i] = char(int('a' + (nombre[i] - 'a' + desplazamiento) % 26));
        }
    }

    // Desencriptar 
    for (int i = 0; i < 5; i++) {
        if (encriptado[i] >= 'A' && encriptado[i] <= 'Z') {
            desencriptado[i] = char(int('A' + (encriptado[i] - 'A' + (26 - desplazamiento)) % 26));
        } else if (encriptado[i] >= 'a' && encriptado[i] <= 'z') {
            desencriptado[i] = char(int('a' + (encriptado[i] - 'a' + (26 - desplazamiento)) % 26));
        }
    }

    cout << "Nombre original: " << nombre << endl;
    cout << "Nombre encriptado: " << encriptado << endl;
    cout << "Nombre desencriptado: " << desencriptado << endl;

    return 0;
}
