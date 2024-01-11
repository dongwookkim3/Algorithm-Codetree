#include <iostream>
#define MAX 5
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    for (int i=1;i<=MAX;i++){
        A[1][i]=1;
        cout << A[1][i] << ' ';
    }
    cout << "\n";
    for (int i=2;i<=MAX;i++){
        for (int j=1;j<=MAX;j++){
            A[i][j]=A[i-1][j]+A[i][j-1];
            cout << A[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}