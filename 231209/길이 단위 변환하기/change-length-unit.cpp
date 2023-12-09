#include <iostream>
using namespace std;
int main(){
    double A=9.2,B=1.3;
    cout << fixed;
    cout.precision(1);
    cout << A << "ft = " << A*30.48 << "cm\n";
    cout << B << "mi = " << B*160934 << "cm\n";
    return 0;
}