#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A[3]={};
    for (int i=0;i<=2;i++){
        cin >> A[i];
    }
    sort(A,A+3);
    for (int i=A[0];i<=A[2];i++){
        if (i==A[1]) continue;
        for (int j=1;j<=9;j++){
            cout << i << " * " << j << " = " << i*j << "\n";
        }
    }
    return 0;
}