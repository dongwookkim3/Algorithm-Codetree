#include <iostream>
using namespace std;
int main(){
    float m=0;
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        m+=a;
    }
    cout << fixed;
    cout.precision(1);
    cout << m/10;
    return 0;
}