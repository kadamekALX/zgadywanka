#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    std::cout << "ZGADYWANKA\n";
    std::cout << "Mysle o liczbie z zakresu 1-1000. Zgadnij co to za liczba:";
    int wylosowana = std::rand() % 999 + 1;
    int n;
    std::cin >> n;
    if (n == wylosowana)
        std::cout << "Brawo!\n";
    else {
        std::cout << "Pudlo! Myslalem o " << wylosowana << '\n';
    }
}
