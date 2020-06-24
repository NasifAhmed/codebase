#include <bits/stdc++.h>

using namespace std;


int main() {
    
    //cout << ": " <<  << "\n";

    int n,take=0;
    string s;

    cin >> n;
    cin >> s;

    for(int i=0 ; i<n ; i++) {
        if(i!=n-1 && s[i]==s[i+1]) {
            take++;
        }
    }

    cout << take;

}