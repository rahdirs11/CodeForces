#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	int remainingSteps = x % 5, steps = x / 5;;
	cout << (remainingSteps != 0? (steps + 1): steps) << endl;
	return 0;
}