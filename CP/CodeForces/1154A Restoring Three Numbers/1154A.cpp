#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d,largest=0,pos=0,count=0;

    cin >> a >> b >> c >> d;

    int arr[4] = {a,b,c,d};

    for(int i=0 ; i<4 ; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
            pos = i;
        }
    }   

    

    for(int j=0 ; j<4 ; j++) {
        if(j==pos) {
            continue;
        }
        cout << largest - arr[j];
        count++;

        if(count==1 || count==2) {
            cout << " ";
        }
        
    }
}