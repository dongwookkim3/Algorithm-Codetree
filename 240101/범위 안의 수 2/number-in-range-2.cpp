#include <iostream>
using namespace std;
int main(){
    int m=0,m1=0;
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        if (a>=0 && a<=200) {
            m+=a;
            m1++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << m << ' ' << (float)m/m1;
    return 0;
}