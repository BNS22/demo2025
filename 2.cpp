#include <iostream>
int main() {
    int N;
    std::cout << "N = ";
    std::cin >> N;
    double s = 1;
    for (int i = 0; i < N; i++) {
        int d = 2;
        for (int k = 0; k < i; k++) d *= 2;
        s += 1./d;
    }
    std::cout << "S = " << s;
}