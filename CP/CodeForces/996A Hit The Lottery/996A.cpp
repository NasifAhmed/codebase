#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=0, bills=0, i=0;

    cin >> n;

    int b[4] ={100,20,10,5};
    while(i<4) {
        bills += n/b[i];
        n = n%b[i];
        if(n==0) {
            break;
        }

        //cout << "bills " << bills << " || " << "n " << n << "\n";

        i++;
    }

    cout << bills+n;
}