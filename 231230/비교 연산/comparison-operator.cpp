#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << (a>=b) << "\n" << (a>b) << "\n" << (b>=a) << "\n" << (b>a) << "\n" << (a==b) << "\n" << (a!=b);
    return 0;
}