#include <iostream>
#include <array>
#include <vector>
#include <fstream>

int main() {
    int32_t n = 1;
    std::cin >> n;
    std::ofstream binFile ("output.bin", std::ios::binary);
    //std::array<double, 65536> arr = {0};
    std::vector<double> arr(n);
    arr[0] = 1;
    for(int32_t i = 2; i <= n; i++) {
        arr[i-1] = arr[i-2] + 1.0/i;
    }
    /*
    for(int32_t i = 0; i < n; i++) {
        std::cout << std::scientific << arr[i] << '\n';
    } */
    for(int32_t i = 0; i < n; i++) {
        binFile << std::scientific << arr[i] << '\n';
    }
}
