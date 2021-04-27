#include <iostream>

int main() {
    int n{}, count{}, p{}, q{};
    std::cin >> n;
    while (n > 0) {
        std::cin >> p >> q;
        if (q - p >= 2) {
            ++count;
        }
        --n;
    }
    std::cout << count << std::endl;
    return 0;
}