#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        cin >> A[i];
    }
    sort(A+1,A+MAX+1);
    for (int i=1;i<=MAX;i++){
        if (A[i]>=500){
            cout << A[i-1] << ' ' << A[i];
            break;
        }
    }
    return 0;
}