#include <iostream>
#include <limits>

using namespace std;

int main() {
    char repetir;
    do { 
        int n, precio;
        int contMenor = 0;
        int contMedio = 0;
        int contMayor = 0;

        cout << "Ventas (n): ";
        if (!(cin >> n) || n <= 0) continue;

        int i = 1;
        while (i <= n) {
            cout << "Precio " << i << ": $";
            if (!(cin >> precio)) { cin.clear(); cin.ignore(10000, '\n'); continue; }

            if (precio < 25000) {
                contMenor++;
            } else if (precio <= 120000) {
                contMedio++;
            } else {
                contMayor++;
            }
            i++;
        }

        cout << "< 25k: " << contMenor << endl;
        cout << "25k-120k: " << contMedio << endl;
        cout << "> 120k: " << contMayor << endl;
        
        cout << "Repetir? (S/N): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's');
    return 0;
}
