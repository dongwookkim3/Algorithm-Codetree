#include <iostream>
using namespace std;
int main(){
    float A[3][5]={};
    cout << fixed;
    cout.precision(1);
    for (int i=1;i<=2;i++){
        float a=0;
        for (int j=1;j<=4;j++){
            cin >> A[i][j];
            a+=A[i][j];
            if (i==2){
                A[i][j]+=A[i-1][j];
                A[i][j]/=2;
            }
        }
        cout << a/4 << ' ';
    }
    cout << "\n";
    float a=0;
    for (int i=1;i<=4;i++){
        a+=A[2][i];
        cout << A[2][i] << ' ';
    }
    cout << "\n"<< a/4;
    return 0;
}