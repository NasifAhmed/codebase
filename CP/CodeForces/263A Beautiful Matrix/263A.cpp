#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n"
    int n,found=0,ans=0;

    for(int i=0 ; i<5 ; i++) {
        for(int j=0 ; j<5 ; j++) {

            cin >> n;

            if(n==1) {
                ans = abs(2-i) + abs(2-j);
            }
        }
    }

    cout << ans;
}
