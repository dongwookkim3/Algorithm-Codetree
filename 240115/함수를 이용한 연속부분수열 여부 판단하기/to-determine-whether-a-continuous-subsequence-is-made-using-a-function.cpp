#include <iostream>
#define MAX 100
using namespace std;
bool f(int n,int m,int A[MAX+1],int B[MAX+1]){
    for (int i=1;i<=n;i++){
        if (A[i]==B[1]){
            for (int j=1;j<=m;j++){
                if (A[i+j-1]!=B[j]){
                    break;
                }
                else if (j==m){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main(){
    int n,m;
    int A[MAX+1];
    int B[MAX+1];
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int i=1;i<=m;i++){
        cin >> B[i];
    }
    if (f(n,m,A,B)) cout << "Yes";
    else cout << "No";
    return 0;
}