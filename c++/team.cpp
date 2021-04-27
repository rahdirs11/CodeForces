#include <iostream>
using namespace std;

int main(){
    int n, solved = 0;
    cin >> n;
    while (n > 0){
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1) || (a == 1 && b == 1 && c == 1))
            ++solved;            
        --n;
    }
    cout << solved << endl;
    return 0;
}
