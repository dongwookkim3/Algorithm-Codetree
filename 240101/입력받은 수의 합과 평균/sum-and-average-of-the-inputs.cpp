#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        m+=a;
    }
    cout << fixed;
    cout.precision(1);
    cout << m << ' ' << (float)m/n;
    return 0;
}