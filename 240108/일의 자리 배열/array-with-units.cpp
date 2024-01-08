#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=1;i<=2;i++){
        cin >> A[i];
        cout << A[i] << ' ';
    }
    for (int i=3;i<=10;i++){
        A[i]=(A[i-1]+A[i-2])%10;
        cout << A[i] << ' ';
    }
    return 0;
}