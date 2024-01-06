#include <iostream>
using namespace std;
int main(){
    int n,m=9;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << m;
            m--;
            if (m==0) m=9;
        }
        cout << "\n";
    }
    return 0;
}