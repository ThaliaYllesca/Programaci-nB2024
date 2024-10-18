    #include <iostream>
    using namespace std;

    int main() {
        int n;

        cout << "Ingrese un número entero positivo: ";
        cin >> n;

        cout << "Secuencia de Collatz: ";
        while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2; 
        } else {
            n = 3 * n + 1; 
        }
         }
     cout << n << endl; 

    return 0;
}
