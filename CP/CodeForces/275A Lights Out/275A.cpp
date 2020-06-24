#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //cout << ": " <<  << "\n";

    int matrix[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int command=0,x=0,y=0;

    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            cin >> command;
            if(command%2!=0) {
                if(matrix[i][j]==0) {
                    matrix[i][j]=1;
                } else {
                    matrix[i][j]=0;
                }
                //cout << "HIM (" << i << j << ")\n";

                x = j;
                y = i;

                if(--x>=0) {
                    if(matrix[i][x]==0) {
                        matrix[i][x]=1;
                    } else {
                        matrix[i][x]=0;
                    } 
                    //cout << "(" << i << x << ")\n";
                }
                x++;
                if(++x<=2) { 
                    if(matrix[i][x]==0) {
                        matrix[i][x]=1;
                    } else {
                        matrix[i][x]=0;
                    }
                    //cout << "(" << i << x << ")\n";
                }
                x--;
                if(--y>=0) { 
                    if(matrix[y][j]==0) {
                        matrix[y][j]=1;
                    } else {
                        matrix[y][j]=0;
                    }
                    //cout << "(" << y << j << ")\n";
                }
                y++;
                if(++y<=2) { 
                    if(matrix[y][j]==0) {
                        matrix[y][j]=1;
                    } else {
                        matrix[y][j]=0;
                    } 
                    //cout << "(" << y << j << ")\n";
                }
                y--;

            }
        }
    }

    for(int a=0 ; a<3 ; a++) {
        for(int b=0 ; b<3 ; b++) {
            cout << matrix[a][b];
        }
        cout << "\n";
    }

}