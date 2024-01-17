#include <iostream>
using namespace std;
void f(int n){
    for (int i=1;i<=n;i++){
        cout << "* ";
    }
    cout << "\n";
}
void star(int n){
    if (n==0) return;
    f(n);
    star(n-1);
    f(n);
}
int main(){
    int n;
    cin >> n;
    star(n);
    return 0;
}