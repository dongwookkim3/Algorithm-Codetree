#include <iostream>
using namespace std;
int GCD(int n,int m){
    if (m==0) return n;
    else return GCD(m,n%m);
}
int main(){
    int n,m;
    cin >> n >> m;
    cout << GCD(n,m);
    return 0;
}