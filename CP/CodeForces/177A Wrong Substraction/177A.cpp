#include <bits/stdc++.h>

using namespace std;

int wrongsub(int n , int a) {
    
    while (a--) {
        if(n%10==0) {
            n /= 10;
        } else {
            n--;
        }
    }

    return n;
}

int main() {
    int num,times;

    cin >> num >> times;

    cout << wrongsub(num,times) << "\n";

    return 0;
}