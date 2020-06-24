#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n"

    int check=0;

    string t,h;

    cin >> t;
    for(int i=0 ; i<5 ; i++) {
        cin>>h;
        if(t[0]==h[0] || t[1]==h[1]) {
            cout << "YES";
            check=1;
            break;
        }
    }

    if(check==0) {
        cout << "NO";
    }
}