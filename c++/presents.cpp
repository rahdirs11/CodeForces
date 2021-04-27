/*
2 -> 1
3 -> 2
4 -> 3
1 -> 4

1 -> 1
3 -> 2
2 -> 3

Friends were numbered from 1 to n
i gave a gift to pi
each friend will end up with just one gift


*/
#include <iostream>
int* gift(int p[], int n) {
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        a[p[i] - 1] = i + 1;
    }
    return a;
}

int main() {
    int n{};
    std::cin >> n;
    int* p = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }
    int* a = gift(p, n);
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
}