#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    string word;

    cin >> word;

    if (word[0]>90) {
        word[0] = (char)((int)word[0]-32);
    }

    cout << word;

}