#include <iostream>
#include <cmath>
#include <limits>

int main() {
    std::cout << "Simple Calculator\n";
    while (true) {
        std::cout << "\nSelect operation:\n"
                  << "1) Add\n"
                  << "2) Subtract\n"
                  << "3) Multiply\n"
                  << "4) Divide\n"
                  << "5) Modulus (fmod)\n"
                  << "6) Power\n"
                  << "7) Exit\n"
                  << "Choice: ";

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 7) break;

        double a = 0.0, b = 0.0;
        std::cout << "Enter first number: ";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid number. Returning to menu.\n";
            continue;
        }
        std::cout << "Enter second number: ";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid number. Returning to menu.\n";
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Result: " << (a + b) << '\n';
                break;
            case 2:
                std::cout << "Result: " << (a - b) << '\n';
                break;
            case 3:
                std::cout << "Result: " << (a * b) << '\n';
                break;
            case 4:
                if (b == 0.0) {
                    std::cout << "Error: Division by zero.\n";
                } else {
                    std::cout << "Result: " << (a / b) << '\n';
                }
                break;
            case 5:
                if (b == 0.0) {
                    std::cout << "Error: Modulus by zero.\n";
                } else {
                    std::cout << "Result: " << std::fmod(a, b) << '\n';
                }
                break;
            case 6:
                std::cout << "Result: " << std::pow(a, b) << '\n';
                break;
            default:
                std::cout << "Unknown choice. Try again.\n";
        }
    }

    std::cout << "Goodbye.\n";
    return 0;
}