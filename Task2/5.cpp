#include <iostream>
#include <cmath>
int main() {
    int x1, x2, eps, dx;
    std::cout << "X1 = ";
    std::cin >> x1;
    std::cout << "X2 = ";
    std::cin >> x2;
    std::cout << "DX = ";
    std::cin >> dx;
    std::cout << "EPS = ";
    std::cin >> eps;
    std::cout << "|\tx\t|\tf(x)\t|\tsin(x)\t|\n";
    for (int x = x1; x < x2; x += dx) {
        std::cout << "|\t" << x << "\t|\t";
        double f = x;
        double d = 1;
        double nominator = x;
        double denominator = 1;
        int counter = 1;
        for (int i = 0; i < eps; i++) {
            nominator *= x * x;
            denominator *= (counter + 1) * (counter + 2);
            counter += 2;
            d *= -1;
            f += (nominator * d) / denominator;
        }
        std::cout << f << "\t|\t";
        std::cout << sin(x) << "\t|\t";
        std::cout << '\n';
    }
}
