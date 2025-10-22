#include <iostream>

using namespace std;

int main() {
    char repetir;
    do { 
        int inicioTabla, finTabla, inicioMulti, finMulti;
        
        cout << "Tabla Inicial: ";
        if (!(cin >> inicioTabla)) return 0;
        cout << "Tabla Final: ";
        if (!(cin >> finTabla)) return 0;

        cout << "Multiplicador Inicial: ";
        if (!(cin >> inicioMulti)) return 0;
        cout << "Multiplicador Final: ";
        if (!(cin >> finMulti)) return 0;
        
        int i = inicioTabla;
        // Bucle EXTERNO para las Tablas
        while (i <= finTabla) { 
            cout << "\nTabla del " << i << ":" << endl;
            
            int j = inicioMulti;
            // Bucle INTERNO para los Multiplicadores
            while (j <= finMulti) { 
                cout << i << " x " << j << " = " << (i * j) << endl;
                j++;
            }
            
            i++;
        }

        cout << "Repetir? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');
    return 0;
}
