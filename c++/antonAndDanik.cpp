#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // char c{};
    string s{};
    int n{};
    cin >> n;
    int anton{}, danik{};
    for (int i = 0; i < n; ++i) {
        char y{};
        cin >> y;
        s.push_back(y);
    }
    anton = count(s.begin(), s.end(), 'A');
    danik = count(s.begin(), s.end(), 'D');
    cout << (anton > danik? "Anton": (anton == danik? "Friendship": "Danik")) << endl;
    return 0;
}
