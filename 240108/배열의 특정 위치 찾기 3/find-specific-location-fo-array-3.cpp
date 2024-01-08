#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;;i++){
        cin >> A[i];
        if (A[i]==0){
            cout << A[i-1]+A[i-2]+A[i-3];
            break;
        }
    }
    return 0;
}