#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    float A=a+b,B=a-b;
    cout << fixed;
    cout.precision(2);
    cout << A/B;
    return 0;
}