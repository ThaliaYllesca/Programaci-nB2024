#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(numeros.begin(), numeros.end());
    numeros.erase(unique(numeros.begin(), numeros.end()), numeros.end());

    cout << "Elementos sin duplicados:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
