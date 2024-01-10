#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n,m;
    int x=1,y=1;
    int dx=1,dy=2;
    int A[MAX+1][MAX+1]={};
    cin >> n >> m;
    if (m==1){
        dx=2;
        dy=1;
    }
    for (int i=1;i<=n*m;i++){
        A[x][y]=i;
        if (y==1 || x==n){
            x=dx;
            y=dy;
            if (dy==m) dx++;
            else dy++;
        }
        else {
            x++;
            y--;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}