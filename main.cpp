#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    std::cout << "ZGADYWANKA\n";
    std::cout << "Mysle o liczbie z zakresu 1-1000. Zgadnij co to za liczba:";
    int wylosowana = std::rand() % 999 + 1;
    int n;
    while (std::cin >> n, n != wylosowana) {
        std::cout << "Pudlo! Zgaduj jeszcze raz:"
    }
    std::cout << "Brawo!\n";
}
