#include <iostream>
#include <fstream>
#include <array>

int main() {
    int32_t n = 0;
    int32_t a = 0, b = 1;
    std::cin >> n;
    std::array<int32_t, 65536> arr = {0};
    for(int32_t i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            arr[i-1] = b;
            b = a + b;
        }
        if (i % 2 == 1) {
            arr[i-1] = a;
            a = a + b;
        }
    }

    for(int32_t i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
}
