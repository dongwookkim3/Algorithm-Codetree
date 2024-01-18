#include <iostream>
using namespace std;
int f(int n,int m){
    int a;
    cin >> a;
    if (a>m){
        m=a;
    }
    if (n==1) return m;
    else return f(n-1,m);
}
int main(){
    int n;
    cin >> n;
    cout << f(n,0);
    return 0;
}