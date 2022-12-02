#include <iostream>
#include <stdexcept>
#include "Vehicule.hpp"

int main() {
    Vehicule v1(10, 5, 1);
    v1.demarrer();
    try {
        v1.accelerer(5);
    }
    catch(const std::invalid_argument& e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << v1 << std::endl;
    try {
        v1.accelerer(10);
    }
    catch(const std::invalid_argument& e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << v1 << std::endl;
    
    return 0;
}
