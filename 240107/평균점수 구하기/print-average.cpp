#include <iostream>
using namespace std;
int main(){
    float m=0;
    for (int i=1;i<=8;i++){
        float a;
        cin >> a;
        m+=a;
    }
    cout << fixed;
    cout.precision(1);
    cout << m/a;
    return 0;
}