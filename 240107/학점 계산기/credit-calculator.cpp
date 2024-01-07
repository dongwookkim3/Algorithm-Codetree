#include <iostream>
using namespace std;
int main(){
    int n;
    float m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        float a;
        cin >> a;
        m+=a;
    }
    m/=n;
    cout << fixed;
    cout.precision(1);
    cout << m << "\n";
    if (m>=4) cout << "Perfect";
    else if (m>=3) cout << "Good";
    else cout << "Poor";
    return 0;
}