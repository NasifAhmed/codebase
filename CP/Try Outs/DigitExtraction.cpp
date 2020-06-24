#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    int n,rem=0;

    cin >> n;

    for(int i=0 ; i<5 ; i++) {
        rem = n%10;
        n /= 10;
        cout << rem << "\n";  // prints all the digits from last to first 
    }

}