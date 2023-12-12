#include <iostream>
using namespace std;
int main(){
    int a=5,b=6,c=7;
    int t=c;
    c=b;
    b=a;
    a=t;
    cout << a << "\n" << b << "\n" << c;
    return 0;
}