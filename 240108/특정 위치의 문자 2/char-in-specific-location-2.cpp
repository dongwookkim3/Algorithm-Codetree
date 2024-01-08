#include <iostream>
#define MAX 10
using namespace std;
int main(){
    char A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        cin >> A[i];
    }
    cout << A[2] << ' ' << A[5] << ' ' << A[8];
    return 0;
}