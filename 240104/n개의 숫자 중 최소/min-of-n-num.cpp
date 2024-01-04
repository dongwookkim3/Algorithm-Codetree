#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX]={};
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A,A+MAX);
    cout << A[0];
    return 0;
}