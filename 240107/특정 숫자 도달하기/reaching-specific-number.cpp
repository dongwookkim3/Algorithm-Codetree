#include <iostream>
using namespace std;
int main(){
    int n=0;
    float m=0;
    cout << fixed;
    cout.precision(1);
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        if (a>250){
            cout << m << ' ' << m/n;
            return 0;
        }
        m+=a;
        n++;
    }
    cout << m << ' ' << m/n;
    return 0;
}