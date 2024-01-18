#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    int n;
    string A[MAX]={};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A,A+n);
    for (int i=0;i<n;i++){
        cout << A[i] << "\n";
    }
    return 0;
}