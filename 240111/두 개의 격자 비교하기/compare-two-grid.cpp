#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int n,m;
    int A[MAX+1][MAX+1]={};
    int B[MAX+1][MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> A[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> B[i][j];
            cout << (A[i][j]!=B[i][j]) << ' ';
        }
        cout << "\n";
    }
    return 0;
}