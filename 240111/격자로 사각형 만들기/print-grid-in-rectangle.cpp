#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        A[1][i]=1;
        cout << A[1][i] << ' ';
    }
    cout << "\n";
    for (int i=2;i<=n;i++){
        for (int j=1;j<=n;j++){
            A[i][j]=A[i-1][j]+A[i-1][j-1]+A[i][j-1];
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}