#include <iostream>
#define MAX 500
using namespace std;
int main(){
    int n,m=0;
    int A[MAX+1][MAX+1]={};
    cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        for (int i=x;i<x+10;i++){
            for (int j=y;j<y+10;j++){
                A[i][j]=1;
            }
        }
    }
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=MAX;j++){
            if (A[i][j]==1) m++;
        }
    }
    cout << m;
    return 0;
}