#include "Header.h"
#include "Race.cpp"

int main() {
    int seed;
    std::cout << "Please enter a random seed: ";
    std::cin >> seed;
    srand(seed);

    Race r;
    r.start();
}
