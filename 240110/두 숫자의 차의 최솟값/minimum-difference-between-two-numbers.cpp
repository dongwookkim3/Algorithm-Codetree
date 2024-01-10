#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;
int main(){
    int n,m=1000;
    int A[MAX]={};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
        if (i>=1) m=min(m,A[i]-A[i-1]);
    }
    cout << m;
    return 0;
}