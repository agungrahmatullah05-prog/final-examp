#include <iostream>
#include <string>

int main(int argc, char** argv) {
    long long n;

    if (argc > 1) {
        try {
            n = std::stoll(argv[1]);
        } catch (...) {
            std::cerr << "Invalid integer\n";
            return 1;
        }
    } else {
        std::cout << "Enter an integer: ";
        if (!(std::cin >> n)) {
            std::cerr << "Invalid input\n";
            return 1;
        }
    } 

    std::cout << n << " is " << ((n % 2 == 0) ? "even\n" : "odd\n");
    return 0;
}