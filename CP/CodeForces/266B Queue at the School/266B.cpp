#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n"

    int n,t,timer=0,i=0;
    string q;
    
    cin >> n >> t;
    cin >> q;

   for(int timer=1 ; timer <=t ; timer++) {

       for(int i=0 ; i<n ; i++) {

           if(i!=n-1 && q[i]=='B' && q[i+1]=='G') {
            q[i] = 'G';
            q[i+1] = 'B';
            i++;
            }
       }
    }

    cout << q;
}