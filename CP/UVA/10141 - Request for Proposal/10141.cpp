#include <bits/stdc++.h>

using namespace std;

int main() {
     int rfp,count=0;
     float req,metReq,price,priceBefore,comp,x,y;
     string found="";
     string name="";
     string waste="";

     while (1) {
        metReq = 0;
        price = 0;
        priceBefore = 0;
        comp = 0;
        x = 0;
        y = 0;
        found="";
        name="";
        cin >> req >> rfp;
        
        if(req==0 && rfp==0) {
            break;
        }
        x = req;
        while(x--){
        cin.ignore(); //to ignore the enter pressed on keyboard. escaping it
        getline(cin, waste);
        }

        while(rfp--) {
            getline(cin, name);
            cin >> price >> metReq;
            y = metReq;
            while(y--){
                cin.ignore();  //to ignore the enter pressed on keyboard. escaping it
                getline(cin, waste);
            }
            if(metReq/req== comp && price < priceBefore) {
                found = name;
                priceBefore = price;  
            } else if(metReq/req > comp) {
                comp = metReq/req;
                found = name;
                priceBefore = price;
            }
        }

        count++;
        if(count>1) {
            cout << "\n";   //for the blank line mentioned in the problem but only when its afte the first one. to avoid error.
        }
        cout << "RFP #" << count << "\n" << found << "\n";
     }

}



