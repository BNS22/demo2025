#include <iostream>
#include <cmath>
int main() {
    double N;
    long double X;
    std::cout << "N = ";
    std::cin >> N;
    std::cout << "X = ";
    std::cin >> X;
    long double s = 0;
    long double d = X;
    for (int i = 0; i < N; i++) {
        d = sin(d);
        s+= d;
    }
    std::cout << "S = " << s;
}