#include <iostream>
#define MAX 4
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=MAX;j++){
            cin >> A[i][j];
        }
    }
    int m=0;
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=i;j++){
            m+=A[i][j];
        }
    }
    cout << m;
    return 0;
}