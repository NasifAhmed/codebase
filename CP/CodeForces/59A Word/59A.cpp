#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    string word;
    int up=0,low=0;

    cin >> word;

    for(int i=0 ; i<word.length() ; i++) {
        if(word[i]<=90) {
            up++;
        } else {
            low++;
        }    
    }

    for(int j=0 ; j<word.length() ; j++) {
        if(up>low) {
            if(word[j]>90) {
                word[j] = (char)((int)word[j]-32);
            }
        } else {
            if(word[j]<=90) {
                word[j] = (char)((int)word[j]+32);
            }
        }
    }

    

    cout << word;

}