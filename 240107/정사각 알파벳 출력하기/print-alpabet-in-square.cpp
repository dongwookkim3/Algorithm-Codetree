#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << (char)((i-1)*n+j+64);
        }
        cout << "\n";
    }
    return 0;
}