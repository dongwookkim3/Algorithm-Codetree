#include <iostream>
using namespace std;
int f(int n,int m){
    if (n==0) return 0;
    if (n%2==m%2){
        return n+f(n-1,m);
    }
    else {
        return f(n-1,m);
    }
}
int main(){
    int n;
    cin >> n;
    cout << f(n,n);
    return 0;
}