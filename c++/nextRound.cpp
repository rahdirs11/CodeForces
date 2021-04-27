#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, num;
    cin >> n >> k;
    vector<int> array(n);
    for (int i = 0; i < n; ++i){
        cin >> num;        
        array[i] = num;
    }
    int atK = array.at(k-1);
    if (atK == 0){
        auto itr = find(array.begin(), array.end(), atK);
        if (distance(array.begin(), itr) == 0)
            cout << 0 << endl;
        else{
            reverse(array.begin(), array.end());
            cout << distance(upper_bound(array.begin(), array.end(), atK), array.end()) << endl;            
        }
    } else{
        reverse(array.begin(), array.end());
        cout << (distance(upper_bound(array.begin(), array.end(), atK), array.end()) + count(array.begin(), array.end(), atK)) << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // initializing vector of integers
//     vector<int> arr = {10, 15, 20, 25, 30, 35};

//     // using binary_search to check if 15 exists
//     if (binary_search(arr.begin(), arr.end(), 15))
//         cout << "15 exists in vector " << distance(arr.begin(), (find(arr.begin(), arr.end(), 35)));
//     else
//         cout << "15 does not exist";

//     cout << endl;

//     // using binary_search to check if 23 exists
//     if (binary_search(arr.begin(), arr.end(), 23))
//         cout << "23 exists in vector";
//     else
//         cout << "23 does not exist";

//     cout << endl;
// }