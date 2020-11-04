#include <bits/stdc++.h>

using namespace std;

int main() {
    string dna="";
    char prev=' ';
    int seq=1;
    int longest=0;

    cin >> dna;

    for(int i=0 ; i<dna.length() ; i++) {

        if(dna[i]==prev) {
            seq++;
        } else {
            seq=1;
        }

        prev = dna[i];
        if(seq>longest) {
           longest=seq; 
        }

    }

    cout << longest;
}
