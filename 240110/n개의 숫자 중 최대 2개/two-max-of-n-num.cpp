#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    int n;
    long long A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    sort(A+1,A+n+1,greater<int>());
    cout << A[1] << ' ' << A[2];
    return 0;
}