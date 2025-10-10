#include <iostream>
int main() {
    int N;
    std::cout << "N = ";
    std::cin >> N;
    double s = 0;
    for (int i = 1; i <= N; ++i) s+= 1./i;
    std::cout << "S = " << s;
}