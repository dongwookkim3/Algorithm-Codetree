#include <iostream>
using namespace std;
int f(int n){
    if (n==1) return 2;
    else if (n==2) return 4;
    else return (f(n-1)*f(n-2))%100;
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}