#include <iostream>
using namespace std;
int main(){
    float a,b;
    char c;
    cin >> c >> a >> b;
    cout << fixed;
    cout.precision(2);
    cout << c << "\n" << a << "\n" << b;
    return 0;
}