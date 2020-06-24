#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int layers=0,n=1;

    cin >> layers;


    while (n<=layers) {

        if(n%2==0 && n!=1) {
            cout << "I love";
        } else {
            cout << "I hate";
        } 

        if (layers!=1 && n!=layers) {
            cout << " that ";
        }

        n++;
    }

    cout << " it";
}