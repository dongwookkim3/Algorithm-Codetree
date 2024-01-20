#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        sort(A+1,A+i+1);
        if (i%2){
            cout << A[i/2+1] << ' ';
        }
    }
    return 0;
}