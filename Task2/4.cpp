#include <iostream>
int main() {
    int N;
    std::cout << "N = ";
    std::cin >> N;
    long double s = 1;
    double n = 1;
    int d = 1;
    for (int i = 0; i < N; i ++) {
        n *= - 1;
        d += 2;
        s += n/d;
    }
    std::cout << "Pi = " << s * 4;
}
