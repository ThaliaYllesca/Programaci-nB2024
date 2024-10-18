
        #include <iostream>
        #include <string>
        using namespace std;

                int main() {
                     string texto;
                    int clave;

                cout << "Ingrese el texto a cifrar: ";
                cin.ignore();
                getline(cin, texto);
                cout << "Ingrese la clave (número): ";
                cin >> clave;

                        for (char &c : texto) {
                            if (isalpha(c)) {
                        char base = islower(c) ? 'a' : 'A';
                        c = (c - base + clave) % 26 + base;
                        }
                        }

                        cout << "Texto cifrado: " << texto << endl;

                return 0;
    }
