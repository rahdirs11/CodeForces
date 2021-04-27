// length of string > 10, its considered as long 
// and must be replaced with a special abbreviation
// abbreviation : first and last letter of word, between them the number of letters
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n > 0){
        string word;
        cin >> word;
        if (word.length() > 10)
            cout << word[0] << word.length() - 2 << word[word.length() - 1];
        else    cout << word;
        cout << endl;
        --n;
    }

    return 0;
}