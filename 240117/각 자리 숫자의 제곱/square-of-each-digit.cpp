#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return f(n/10)+(n%10)*(n%10);
    else return n*n;
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}