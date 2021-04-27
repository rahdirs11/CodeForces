/*
Find the index of 1 in the matrix
and find its distance from (2, 2)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n{}, output{};
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> n;
            if (n == 1) {
                output = abs(i - 2) + abs(j - 2);                
            }
        }
    }
    cout << output << endl;
    return 0;
}
