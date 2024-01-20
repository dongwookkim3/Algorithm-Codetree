#include <iostream>
#include <algorithm>
#define MAX 2000
using namespace std;
int main(){
    int n,m=0;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n*2;i+=2){
        cin >> A[i] >> A[i+1];
    }
    sort(A+1,A+n*2+1);
    for (int i=1;i<=n;i++){
        m=max(m,A[i]+A[n*2-i+1]);
    }
    cout << m;
    return 0;
}