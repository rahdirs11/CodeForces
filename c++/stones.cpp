/*
if a color occurs more than once consecutively then u have to remove the
extra colors, that is, number of occurences (continous) - 1
*/
#include <iostream>
using namespace std;

int main() {
    int n{}, remove{};
    cin >> n;
    char *stones = new char[n];
    char color{};
    for (int i = 0; i < n; ++i) {
        cin >> color;
        stones[i] = color; // *(stones + i) = color
    }
    int i {};
    while (i < n) {
        int j = {i + 1}, count{1};
        while (stones[j] == stones[i] && j < n) {
            ++count;
            ++j;
        }
        i = j;
        if (count > 1) {
            remove += count - 1;
        }
    }
    cout << remove << endl;
    delete [] stones;
    return 0;
}
