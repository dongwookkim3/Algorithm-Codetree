#include <iostream>
#define MAX 15
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=i;j++){
            if (i==j || j==1) A[i][j]=1;
            else A[i][j]=A[i-1][j]+A[i-1][j-1];
        }
    }
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}