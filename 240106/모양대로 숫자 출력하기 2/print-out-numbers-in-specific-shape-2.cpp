#include <iostream>
using namespace std;
int main(){
    int n,m=2;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << m << ' ';
            m+=2;
            if (m>8) m=2;
        }
        cout << "\n";
    }
    return 0;
}