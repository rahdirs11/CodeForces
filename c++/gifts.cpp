#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t > 0){
        int n, minA = 0, minB = 0, moves = 0;        
        cin >> n;
        int a[n], b[n], remA[n], remB[n];
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            minA = a[i] <= minA? a[i]: minA;
        }
        for (int i = 0; i < n; ++i){            
            cin >> b[i];
            minB = b[i] <= minB? b[i]: minB;
        }
        sort(a, a+n);
        sort(b, b+n);
        --t;        
    }
    return 0;
}