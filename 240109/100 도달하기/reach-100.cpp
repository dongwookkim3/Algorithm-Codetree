#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX+1]={1,};
    cin >> n;
    A[1]=n;
    for (int i=0;;i++){
        if (A[i]==0){
            A[i]=A[i-1]+A[i-2];
        }
        cout << A[i] << ' ';
        if (A[i]>=100) break;
    }
    return 0;
}