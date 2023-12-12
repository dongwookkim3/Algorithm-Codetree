#include <iostream>
using namespace std;
int main(){
    int a=1,b=2,c=3;
    a=a+b+c;
    b=a;
    c=a;
    cout << a << ' ' << b << ' ' << c;
    return 0;
}