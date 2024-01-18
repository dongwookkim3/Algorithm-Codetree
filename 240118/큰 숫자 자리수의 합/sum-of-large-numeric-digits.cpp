#include <iostream>
using namespace std;
int f(int a){
    if (a>9) return a%10+f(a/10);
    else return a;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << f(a*b*c);
    return 0;
}