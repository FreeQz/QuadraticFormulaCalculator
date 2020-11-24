#include <iostream>
#include <cmath>

double CalculateDiscriminant(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

int main() {
    double a, b, c;
    std::string answer;
    do {
        std::cin >> a >> b >> c;
        if (a != 0) {
            if (b != 0) {
                auto discriminant = CalculateDiscriminant(a, b, c);
                if (discriminant > 0) {
                    discriminant = sqrt(discriminant);
                    std::cout << (-b + discriminant) / (2 * a) << " " << (-b - discriminant) / (2 * a) << "\n";
                } else if (discriminant == 0) {
                    std::cout << -b / (2 * a) << "\n";
                } else {
                    std::cout << "No real roots\n";
                }
            } else {
                if (c != 0) {
                    auto t = -c / a;
                    if (t > 0) {
                        auto s = sqrt(t);
                        std::cout << s << " " << -s << "\n";
                    } else {
                        std::cout << "No real roots\n";
                    }
                } else {
                    std::cout << 0 << "\n";
                }
            }
        } else {
            if (b != 0) {
                if (c != 0) {
                    std::cout << -c / b << "\n";
                } else {
                    std::cout << 0 << "\n";
                }
            } else {
                if (c != 0) {
                    std::cout << "No real roots\n";
                } else {
                    std::cout << "All real\n";
                }
            }
        }
        std::cout << "More? (y/n): ";
        std::cin >> answer;
    } while (answer == "y" || answer == "yes");
    return 0;
}
