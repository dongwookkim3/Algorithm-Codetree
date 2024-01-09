#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int i=0;
    int A[MAX+1]={};
    while (++i){
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