#include <bits/stdc++.h>

using namespace std;

int main() {

    int i=0,limak,bob;

    cin >> limak >> bob;

    while(++i) {
        limak = 3*limak;
        bob = 2*bob;
        if(limak>bob) {
            cout << i;
            break;
        }
    }
    return 0;
}