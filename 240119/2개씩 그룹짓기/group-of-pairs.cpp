#include <iostream>
#include <algorithm>
#define MAX 2001
using namespace std;
int main(){
    int n,m=0;
    int A[MAX]={};
    cin >> n;
    for (int i=0;i<2*n;i++){
        cin >> A[i];
    }
    sort(A,A+2*n+1);
    A[0]=A[2*n];
    for (int i=0;i<2*n;i++){
        if (A[i+1]+A[i]>m && i%2==0){
            m=A[i+1]+A[i];
        }
    }
    cout << m;
    return 0;
}