#include <iostream>
#define MAX 9
using namespace std;
int main(){
    int n,m;
    int A[MAX+1][MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        A[x][y]=i;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}