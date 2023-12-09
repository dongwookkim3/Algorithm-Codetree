#include <iostream>
using namespace std;
int main(){
    int A=13;
    float B=0.165;
    cout << fixed;
    cout.precision(6);
    cout << A << " * " << B << " = " << A*B;
    return 0;
}