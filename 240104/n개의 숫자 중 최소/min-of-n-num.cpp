#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX]={};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A,A+n);
    cout << A[0] << ' ';
    for (int i=1;;i++){
        if (A[i]!=A[0]){
            cout << i-1;
            break;
        }
    }
    return 0;
}