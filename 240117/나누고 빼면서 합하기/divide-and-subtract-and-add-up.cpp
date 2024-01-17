#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n,m,s=0;
    int A[MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    while(m!=0){
        s+=A[m];
        if (m%2==0) m/=2;
        else m--;
    }
    cout << s;
    return 0;
}