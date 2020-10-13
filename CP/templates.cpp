/*Standard code*/

//This is the standard starting code. 
#include <bits/stdc++.h>  //This line includes every needed library for the code

using namespace std; //this lets you write standard library commands without std::

int main() {
    
    //cout << ": " <<  << "\n";

}



/*cin function*/

cin >> "a" >> "b" >> "/n";  //here a and b inputs are seperated by white space of next line. /n is faster than endl



/*optional io optimization*/
ios::sync_with_stdio(0);
cin.tie(0);
// this at the beginning of the code makes cin and cout slightly faster



/*taking the whole line as input with spaces and everything*/

string s;
getline(cin, s);



/*working with unspecified number of inputs*/

while (cin >> x) {
// code
}
//this takes input as long as there is input given, no need to know how many inputs



/*working with input and output form file*/

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
//this lets you write the codes as usual with cin and cout but add this at the beginning of the code and it will work fine. the cin and cout will teka input from the files.



