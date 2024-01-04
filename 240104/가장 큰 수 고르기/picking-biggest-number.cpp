#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A[10]={};
    for (int i=0;i<10;i++){
        cin >> A[i];
    }
    sort(A,A+10,greater<int>());
    cout << A[0];
    return 0;
}