#include <iostream>

using namespace std;

int main() {
    int n, num;
    long long suma; 
    int mayor;
    char rep; 

    do {
        suma = 0;
       
        mayor = -2147483648; 

        cout << "N: ";
        cin >> n;

        cout << "Numeros:\n";

        
        for (int i = 1; i <= n; i++) {
            cout << i << ": ";
            cin >> num;

           
            suma += num;

            
            if (num > mayor) {
                mayor = num;
            }
        }

        // Resultados
        cout << "\nSuma: " << suma << endl;
        // Promedio (con caste de tipo)
        cout << "Promedio: " << (double)suma / n << endl;
        cout << "Mayor: " << mayor << endl;

        cout << "\nRepetir (S/N)? ";
        cin >> rep;

    } while (toupper(rep) == 'S'); 

    return 0;
}
