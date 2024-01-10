#include <iostream>
#define MAX 3
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    int B[MAX+1][MAX+1]={};
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=MAX;j++){
            cin >> A[i][j];
        }
    }
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=MAX;j++){
            cin >> B[i][j];
            cout << A[i][j]*B[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}