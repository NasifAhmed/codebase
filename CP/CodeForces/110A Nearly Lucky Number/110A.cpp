#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    string num;
    int luck=0;

    cin >> num;

    for(int i=0 ; i<num.length() ; i++) {
        if((int)num[i]==52 || (int)num[i]==55) {
            luck++;
        }
    }

    if(luck==4 || luck==7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}