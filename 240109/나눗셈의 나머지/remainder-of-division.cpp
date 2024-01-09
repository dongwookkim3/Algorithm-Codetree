#include <iostream>
using namespace std;
int main(){
    int n,k,m=0;
    int A[10]={};
    cin >> n >> k;
    for (int i=1;;i++){
        A[n%k]++;
        n/=k;
        if (n==0){
            break;
        }
    }
    for (int i=0;i<10;i++){
        m+=A[i]*A[i];
    }
    cout << m;
    return 0;
}