#include <iostream>
using namespace std;

int main(){
	int k, n, w;	
	cin >> k >> n >> w;
	long long int totalCost = 0;
	for (int i = 1; i <= w; ++i)
		totalCost += k * i;
	cout << (totalCost <= n? 0: totalCost - n) << endl;
	return 0;
}