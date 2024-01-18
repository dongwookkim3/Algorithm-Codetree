#include <iostream>
using namespace std;
int f(int n){
    if (n==1 || n==2) return n;
    else return f(n/3)+f(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}