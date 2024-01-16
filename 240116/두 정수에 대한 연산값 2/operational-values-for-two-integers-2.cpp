#include <iostream>
using namespace std;
void f(int &a,int &b){
    a+=10;
    b*=2;
}
int main(){
    int a,b;
    cin >> a >> b;
    if (a<=b) f(a,b);
    else f(b,a);
    cout << a << ' ' << b;
    return 0;
}