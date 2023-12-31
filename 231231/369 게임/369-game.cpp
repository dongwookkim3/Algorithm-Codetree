#include <iostream>
using namespace std;
bool f(int n){
    if (n%10==3 || n%10==6 || n%10==9) return 1;
    else if (n>9) return f(n/10);
    else return 0;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (f(i)) cout << "0 ";
        else cout << i << ' ';
    }
    return 0;
}