#include <iostream>
using namespace std;

string numberFormation(long long int, int, int);

int main(){
	int t;
	cin >> t;
	while (t > 0){
		long long int length;
		int first, second;
		cin >> length >> first >> second;
		cout << numberFormation(length, first, second) << endl;
		--t;
	}
	return 0;
}

string numberFormation(long long int k, int d0, int d1){
	long long int sumOfDigits = d0 + d1;
	int nextDigit;
	for (int i = 3; i <= k; ++i){
		nextDigit = sumOfDigits % 10;
		sumOfDigits += nextDigit;
	}
	return sumOfDigits % 3 == 0? "YES": "NO";

}

/*
5 3 4
-> nextDigit = 7
   sumOfDigits = 7
   d0, d1 = 4, 7
-> nextDigit = 11
*/