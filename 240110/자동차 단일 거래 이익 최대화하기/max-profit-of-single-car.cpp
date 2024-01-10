#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    int n;
    long long A[MAX+1]={};
    long long B[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    for (int i=2;i<=n;i++){
        unsigned long long m=9999999999999;
        for (int j=1;j<=i;j++){
            if (A[j]<m){
                m=A[j];
            }
        }
        B[i]=A[i]-m;
    }
    sort(B+1,B+n+1);
    cout << B[n];
    return 0;
}