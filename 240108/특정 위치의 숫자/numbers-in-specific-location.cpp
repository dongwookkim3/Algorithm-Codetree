#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=10;i++){
        cin >> A[i];
    }
    cout << A[3]+A[5]+A[10];
    return 0;
}