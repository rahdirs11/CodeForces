#include <iostream>
#include <utility>

using namespace std;

int main(){
	pair<int, int> stopCapacity;
	int n;
	cin >> n;
	int minCapacity = 0, present = 0;
	for (int i = 0; i < n; ++i){
		cin >> stopCapacity.first >> stopCapacity.second;
		if (i == n - 1)
			break;
		present += stopCapacity.second - stopCapacity.first;
		if (present >= minCapacity)
			minCapacity = present;
	}
	cout << minCapacity << endl;
}