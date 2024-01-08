#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        cout << A[i]*A[i] << ' ';
    }
    return 0;
}