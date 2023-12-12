#include <iostream>
using namespace std;
int main(){
    int a=2,b=5;
    int t=a;
    a=b;
    b=t;
    cout << a << "\n" << b;
    return 0;
}