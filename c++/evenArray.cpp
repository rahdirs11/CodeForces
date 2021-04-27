#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t >= 1){
		int n;
		cin >> n;
		int array[n];
		int odd{}, even{};
		for (int i = 0; i < n; ++i){
			cin >> array[i];
			if (array[i] % 2 != i % 2){
				if (array[i] % 2 == 0)	++odd;
				else	++even;
			}
		}
		cout << (odd != even? -1: even) << endl;
		--t;
	}
	return 0;
}