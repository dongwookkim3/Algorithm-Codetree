#include <iostream>
#define MAX 50
using namespace std;
void abs(int *a,int n){
    for (int i=0;i<n;i++){
        if (a[i]<0){
            a[i]*=-1;
        }
    }
}
int main(){
    int n;
    int A[MAX+1]={};
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    abs(A,n);
    for (int i=0;i<n;i++){
        cout << A[i] << ' ';
    }
    return 0;
}