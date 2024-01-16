#include <iostream>
#define MAX 50
using namespace std;
void f(int *a,int n){
    for (int i=0;i<n;i++){
        if (a[i]%2==0){
            a[i]/=2;
        }
        cout << a[i] << ' ';
    }
}
int main(){
    int n;
    int A[MAX+1]={};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    f(A,n);
    return 0;
}