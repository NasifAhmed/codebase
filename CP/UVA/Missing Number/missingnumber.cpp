#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    ull n,m,allSum,givenSum=0ull;
    
    cin >> n;

    allSum = n;

    while(--n) {
        cin >> m;
        givenSum += m;
        allSum += n;
    }

    cout << allSum-givenSum << "\n";

    return 0;
}