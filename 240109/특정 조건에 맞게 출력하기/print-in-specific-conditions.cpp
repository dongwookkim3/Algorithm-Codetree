#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int i;
    int A[MAX+1]={};
    for (i=1;i<=MAX;i++){
        cin >> A[i];
        if (A[i]==0){
            break;
        }
    }
    for (int j=1;j<i;j++){
        if (A[j]%2==0){
            cout << A[j]/2 << ' ';
        }
        else {
            cout << A[j]+3 << ' ';
        }
    }
    return 0;
}