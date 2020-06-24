#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    int i=0,valid=0;
    string ans="";
    string code;

    cin >> code;

    for(int i=0 ; i<code.length() ; i++) {

        /*cout << "HEH: " << ans << "\n";
        cout << "CODE: " << code << "\n";
        cout << "VALID: " << valid << "\n";*/

        if(valid==1 && code[i]=='.' && i!=0) {
            ans += '1';
            valid=0;
            continue;
        } else if (valid==1 && i!=0) {
            ans += '2';
            valid=0;
            continue;
        } 
        
        if(code[i]=='.'){
            ans += '0';
        } else {
            valid = 1;
        }
    }

    cout << ans;

}