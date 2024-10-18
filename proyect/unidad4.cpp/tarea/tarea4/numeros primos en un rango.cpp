 #include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int inicio, fin;
    cout << "Ingrese el rango de inicio "<<endl;
    cin >> inicio ;
     cout << "Ingrese el rango de fin "<<endl;
    cin >> fin ;

    vector<int> primos;

    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }

    cout << "Números primos en el rango: ";
    for (int p : primos) {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}



