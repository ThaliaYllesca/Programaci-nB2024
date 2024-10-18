        #include <iostream>

    using namespace std;

    int main() {
        int num[10];
        float promedio = 0;
        int mayores = 0;

        cout << "Ingrese 10 numeros enteros:" << endl;

        for (int i = 0; i < 10; i++) {
            cin >> num[i];
            promedio += num[i];
    }
    promedio /= 10; 

        cout << "Promedio: " << promedio << endl;
        cout << "Numeros mayores que el promedio: ";

        for (int i = 0; i < 10; i++) {
            if (num[i] > promedio) {
            cout << num[i] << " ";
            mayores++;  
        }
    }

        cout << endl << "Total de numeros mayores que el promedio: " << mayores << endl;

    return 0; 
}

        
