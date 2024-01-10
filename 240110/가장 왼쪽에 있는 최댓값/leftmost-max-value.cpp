#include <iostream>
#define MAX 1000
using namespace std;
int main(){
    int n;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    while(n!=0){
        int m=0;
        for (int i=1;i<=n;i++){
            if (A[i]>m){
                m=A[i];
            }
        }
        for (int i=1;i<=n;i++){
            if (A[i]==m){
                cout << i << ' ';
                n=i-1;
                break;
            }
        }
    }
    return 0;
}