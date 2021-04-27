/*
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.
*/

#include <iostream>

long long int calculateF(int n) {
    // long long int oddSum{}, evenSum{}, even{2}, odd{1}, i{1};
    // while (i <= n) {
    //     if (i % 2 == 0) {
    //         evenSum += even;
    //         even += 2;
    //     } else {
    //         oddSum += -odd;
    //         odd += 2;
    //     }
    //     i += 1;
    // }
    // return evenSum + oddSum;
    //  --------------------------------------------------------------------     
    // The above solution is brute force approach with time complexity of O(n)
    if ((n % 10) % 2 == 0) {
        return n / 2;
    } else {
        return ((n - 1) / 2) - n;
    }
}

int main() {
    int n{};
    std::cin >> n;
    std::cout << calculateF(n) << std::endl;
    return 0;
}

/*
-> 4
*/