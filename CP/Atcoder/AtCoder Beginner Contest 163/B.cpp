#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    int n,m,sum=0,days=0;

    cin >> n >> m;

    while(m--) {
        cin >> days;
        sum += days;
    }

    if(sum>n) {
        cout << -1;
    } else {
        cout << n-sum;
    }

}