#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string p;
    std::string r;

    std::cout << "Dame una palabra: ";
    std::cin >> p;

    r = p;

    std::reverse(r.begin(), r.end());

    if (p == r) {
        std::cout << "Es PALINDROMO." << std::endl;
    } else {
        std::cout << "NO es palindromo." << std::endl;
    }

    return 0;
}


