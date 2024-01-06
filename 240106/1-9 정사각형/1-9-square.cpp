#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << m;
            m++;
            if (m>9) m=1;
        }
        cout << "\n";
    }
    return 0;
}