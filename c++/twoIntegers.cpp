#include <iostream>
#include <cstdlib>

using namespace std;

long long int numberOfMoves(long long int, long long int);

int main(){
	int t;
	cin >> t;
	while (t >= 1){
		long long int a, b;
		cin >> a >> b;
		cout << numberOfMoves(a, b) << endl;
		--t;
	}
	return 0;
}

// 18 - 4 = 12; 12 / 10 = 1; 


long long int numberOfMoves(long long int a, long long int b){
	long long int moves = 0, difference;
	if (a == b) return moves;
	else{
		difference = abs(a - b);
		if (difference > 10){
			moves += (difference / 10);
			difference %= 10;
			moves = difference == 0? moves: moves + 1;
		}
		else	moves = 1;
	}
	return moves;
}