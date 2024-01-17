#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n,m;
    int A[MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        A[i]+=A[i-1];
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        cout << A[b]-A[a-1] << '\n';
    }
    return 0;
}