#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n,m;
    int A[MAX+1]={},B[MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int j=1;j<=m;j++){
        cin >> B[j];
    }
    for (int i=1;i<=n-m+1;i++){
        for (int j=1;j<=m;j++){
            if (A[i]!=B[j]){
                break;
            }
            else if (j==m){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}