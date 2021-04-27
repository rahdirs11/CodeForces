#include <iostream>

int amazingPerformances(int a[], int n) {
    int best{-1}, worst{-1}, count{};
    int i{1};
    while (i < n && a[i] == a[0]) {
        ++i;
    }
    while (i < n) {
        if (best == -1) {
            ++count;
            if (a[i] > a[0]) {
                worst = a[0];
                best = a[i];
            } else {
                worst = a[i];
                best = a[0];
            }
        } else if (a[i] > best) {
            ++count;
            best = a[i];
        } else if (a[i] < worst) {
            ++count;
            worst = a[i];
        }
        ++i;
    }
    return count;
}


int main() {
    int n{};
    std::cin >> n;
    int count{};
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::cout << amazingPerformances(a, n) << std::endl;
    delete [] a;
    return 0;
}