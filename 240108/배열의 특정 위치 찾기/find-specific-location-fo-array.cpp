#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1]={},m=0;
    for (int i=1;i<=MAX;i++){
        cin >> A[i];
        if (i%2==0){
            m+=A[i];
        }
    }
    cout << m << ' ';
    cout << fixed;
    cout.precision(1);
    cout << (float)(A[3]+A[6]+A[9])/3;
    return 0;
}