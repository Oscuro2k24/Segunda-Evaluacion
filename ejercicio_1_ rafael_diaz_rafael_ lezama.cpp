#include <iostream>
#include <string>

using namespace std;

int valorRomano(char r) {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return 0;
}

int main() {
    char repetir;
    do { 
        string romano;
        int resultado = 0;
        
        cout << "Romano: ";
        cin >> romano;

        for (int i = 0; i < romano.length(); ++i) { 
            int actual = valorRomano(romano[i]);
            int siguiente = (i + 1 < romano.length()) ? valorRomano(romano[i + 1]) : 0;

            if (actual < siguiente) {
                resultado += (siguiente - actual);
                i++;
            } else {
                resultado += actual;
            }
        }
        
        cout << "Entero: " << resultado << endl;
        cout << "Repetir? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');
    return 0;
}
