#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	int percent[n];
	double orangeJuice{};
	for (int i = 0; i < n; ++i){
		cin >> percent[i];
		orangeJuice += static_cast<double>(percent[i]) / 100;
	}
	cout << fixed << setprecision(12) << orangeJuice * 100 / n << endl;
	return 0;
}