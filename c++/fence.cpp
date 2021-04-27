#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	// multiset <int> people;
	int n, h, a;
	cin >> n >> h;
	int width = 0;
	for (int i = 0; i < n; ++i){
		cin >> a;
		width = a > h? width + 2: width + 1;
		// people.insert(a);
	}
	cout << width << endl;
	// auto taller = upper_bound(people.begin(), people.end(), h);

	// cout << (distance(people.begin(), taller) + (distance(taller, people.end()) * 2)) << endl;
	return 0;
}