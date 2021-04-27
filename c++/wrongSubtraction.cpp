#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	while (k > 0){
		int d = n % 10;
		if (d == 0){
			--k;
			n /= 10;
		} else{			
			if (d < k){
				k -= d;
				n -= d;
			} else{
				n -= k;
				break;
			}
		}
	}
	cout << n << endl;
	return 0;
}

/*
131200, 8
1312, 6
1310, 4
131, 3
130, 2
13, 1

*/