#include <iostream>
#include <numeric>
using namespace std;

int main(){
	int n, k, timeTaken = 0;
	cin >> n >> k;
	int timeLeft = 240 - k;
	for (int i = 0; i < n; ++i){
		timeTaken += 5 * (i+1);
		if (timeTaken >= timeLeft){
			if (timeTaken > timeLeft)
				cout << i;
			else if (timeTaken == timeLeft)
				cout << i + 1;
			break;
		}
	}
	if (timeTaken < timeLeft)
		cout << n;
	cout << endl;
	return 0;
}

/*
1) timeleft = 50
	timeTaken = 5 (0)
	timeTaken = 15 (1)
	timeTaken = 30 (2)
	timeTaken = 50 (3)
*/