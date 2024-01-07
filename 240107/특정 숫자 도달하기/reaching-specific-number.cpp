#include <iostream>
using namespace std;
int main(){
    int n=0;
    float m=0;
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        if (a>250){
            cout << m << ' ';
            cout << fixed;
            cout.precision(1);
            cout << m/n;
            return 0;
        }
        m+=a;
        n++;
    }
    cout << m << ' ';
    cout << fixed;
    cout.precision(1);
    cout << m/n;
    return 0;
}