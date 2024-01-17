#include <iostream>
using namespace std;
void f(int n){
    if (n==0) return;
    f(n-1);
    cout << n << ' ';
}
void g(int n){
    if (n==0) return;
    cout << n << ' ';
    g(n-1);
}
int main(){
    int n;
    cin >> n;
    f(n);
    cout << "\n";
    g(n);
    return 0;
}