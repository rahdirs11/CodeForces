#include <iostream>

using namespace std;
long int sumOfDigits(long long int);
int numOfdigits(long long int n){
	int digits = 0;
	long long int temp = n;
	while (temp != 0){
		++digits;
		temp /= 10;
	}
	return digits;
}


int main(){
	int t;
	cin >> t;
	while (t >= 1){
		long long int n;
		int s;
		cin >> n >> s;
		long sum = sumOfDigits(n);
		if (sum == s)
			cout << 0 << endl;
		else {
			int digits = numOfdigits(n);
			
		}
		--t;
	}
	return 0;
}

long int sumOfDigits(long long int n){
	long long int temp = n;
	long int sum = 0;
	while (temp != 0){
		int d = temp % 10;
		sum += d;		
		temp /= 10;
	}
	return sum;
}


