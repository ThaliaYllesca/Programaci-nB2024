#include <iostream>
#include <string>
using namespace std;

int main() {
    string preguntas[3] = {
        "¿Cuál es la capital de Francia? (a) París (b) Londres (c) Berlín",
        "¿Cuál es el océano más grande? (a) Atlántico (b) Índico (c) Pacífico",
        "¿Cuántos planetas hay en el sistema solar? (a) 8 (b) 9 (c) 7"
    };
    char respuestas[3] = {'a', 'c', 'a'};
    char respuestaUsuario;
    int correctas = 0;

    for (int i = 0; i < 3; i++) {
        cout << preguntas[i] << endl;
        cout << "Tu respuesta: ";
        cin >> respuestaUsuario;

        if (respuestaUsuario == respuestas[i]) {
            correctas++;
        }
    }

    cout << "Respuestas correctas: " << correctas << endl;
    cout << "Respuestas incorrectas: " << (3 - correctas) << endl;

    return 0;
}
