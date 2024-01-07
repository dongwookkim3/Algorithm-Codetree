#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << (char)(m+64);
            m++;
        }
        cout << "\n";
    }
    return 0;
}