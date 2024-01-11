#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int dx[4]={-1,0,1,0};
    int dy[4]={0,-1,0,-1};
    int n;
    int A[MAX+1][MAX+1]={};
    cin >> n;
    int x=n,y=n;
    int m=0;
    for (int i=1;i<=n*n;i++){
        A[x][y]=i;
        if (m%2==1) m++;
        if (x+dx[m]==0 || x+dx[m]==n+1) m++;
        m%=4;
        x+=dx[m];
        y+=dy[m];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}