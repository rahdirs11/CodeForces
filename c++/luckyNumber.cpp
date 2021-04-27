#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	string n{};
	getline(cin, n);
	if (n.find('4') == string::npos || n.find('7') == string::npos || (count(n.begin(), n.end(), '4') + count(n.begin(), n.end(), '7')) != n.length())
		cout << "NO";
	else	cout << "YES";
	cout << endl;		

	return 0;
}