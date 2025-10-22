#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char repetir;
    do { 
        string palabra, alReves = "";
        string limpia = "";
        
        cout << "Frase: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, palabra);


