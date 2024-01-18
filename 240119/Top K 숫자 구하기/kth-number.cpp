#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    int n,m;
    int A[MAX]={};
    cin >> n >> m;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A,A+n);
    cout << A[m-1];
    return 0;
}