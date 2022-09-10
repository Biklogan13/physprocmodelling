#include <iostream>
#include <fstream>


int main() {
    int32_t n = 0;
    int32_t a = 0, b = 1;
    std::ofstream file("output.txt");
    std::cin >> n;

    for(int32_t i = 1; i <= n; i++) {
        if (i%2 == 0) {
            file << i << ' ' << b << '\n';
            b = a + b;
        }
        if (i%2 == 1) {
            file << i << ' ' << a << '\n';
            a = a + b;
        }
    }
    file.close();
}