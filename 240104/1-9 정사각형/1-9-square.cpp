#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int m=(i-1)*n+j;
            m+=m/10;
            cout << m%10;
        }
        cout << "\n";
    }
    return 0;
}