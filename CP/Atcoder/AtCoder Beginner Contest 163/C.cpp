#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    int n,member;
    cin >> n;
    int mem[n+1] = {0};

    for(int i=2 ; i<n+1 ; i++) {
        cin >> member;
        mem[member]++;
    }

    for(int j=1 ; j<n+1 ; j++) {
        cout << mem[j] << "\n";
    }

}