#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n,m=65;
    int A[MAX+1][MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            A[j][i]=m;
            m++;
            if (m==91) m=65;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j%2==1) cout << (char)A[i][j] << ' ';
            else cout << (char)A[n-i+1][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}