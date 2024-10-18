    #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    cout << "Ingrese los elementos:" << endl;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numeros.push_back(num);
    }

    int mayor = numeros[0];

    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "El mayor elemento es: " << mayor << endl;

    return 0;
}

