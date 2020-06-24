#include <bits/stdc++.h>

using namespace std;

int main() {

    int num,faces=0;
    string hedron="";
    
    cin >> num;
    
    while(num--) {
        cin >> hedron ;
        if(hedron=="Tetrahedron") {
            faces += 4;
        } else if(hedron=="Cube") {
            faces += 6;
        } else if(hedron=="Octahedron") {
            faces += 8;
        } else if(hedron=="Dodecahedron") {
            faces += 12;
        } else if(hedron=="Icosahedron") {
            faces += 20;
        }
    }
    cout << faces;
}