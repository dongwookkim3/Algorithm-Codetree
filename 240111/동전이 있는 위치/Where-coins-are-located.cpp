#include <iostream>
#define MAX 9
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    int n,m;
    cin >> n >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        A[a][b]=1;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}