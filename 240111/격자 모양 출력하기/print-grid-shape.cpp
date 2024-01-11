#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int n,m;
    int A[MAX+1][MAX+1]={};
    cin >> n >> m;
    while(m--){
        int x,y;
        cin >> x >> y;
        A[x][y]=x*y;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}