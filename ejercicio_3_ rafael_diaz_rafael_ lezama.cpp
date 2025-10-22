#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char repetir;
    do { 
        int n;
        float nota, sumaNotas = 0;
        float notaMax = -1.0; 
        float notaMin = 101.0; 
        string nombre, nombreMax = "", nombreMin = "";

        cout << "Notas (n): ";
        if (!(cin >> n) || n <= 0) continue;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        int i = 1;
        while (i <= n) {
            cout << "Nombre " << i << ": ";
            getline(cin, nombre); 
            
            cout << "Nota " << i << ": ";
            if (!(cin >> nota)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); continue; }

            sumaNotas += nota;

            if (nota > notaMax) {
                notaMax = nota;
                nombreMax = nombre;
            }

            if (nota < notaMin) {
                notaMin = nota;
                nombreMin = nombre;
            }
            
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            i++;
        }
        
        float promedio = (n > 0) ? sumaNotas / n : 0;

        cout << "Max: " << notaMax << " (" << nombreMax << ")" << endl;
        cout << "Min: " << notaMin << " (" << nombreMin << ")" << endl;
        cout << "Promedio: " << promedio << endl;
        
        cout << "Repetir? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');
    return 0;
}
