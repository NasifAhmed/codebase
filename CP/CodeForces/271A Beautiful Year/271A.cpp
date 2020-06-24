#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    int y,rem=0,n;
    int year[4];

    cin >> y;
    y++;

    while(1) {  

        rem=0;
        n=y;
        for(int i=0 ; i<4 ; i++) {
            rem = n%10;
            n /= 10;
            year[i]=rem;
        }

        if(year[0]!=year[1] && year[0]!=year[2] && year[0]!=year[3] && year[1]!=year[2] && year[1]!=year[3] && year[2]!=year[3]) {
            cout << y;
            break;
        }

        y++;   
    }

    

}