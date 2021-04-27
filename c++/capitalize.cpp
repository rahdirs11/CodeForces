#include <iostream>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int main(){
	string word;
	getline(cin, word);
	if (word.length() <= static_cast<int>(pow(10, 3))){
		if (islower(*word.begin()))
			*word.begin() = toupper(*word.begin());	
	}
	cout << word << endl;
	return 0;
}