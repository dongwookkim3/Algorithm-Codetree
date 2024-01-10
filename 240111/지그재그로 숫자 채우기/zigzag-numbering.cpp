#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (j%2==0){
                cout << j*n-i << ' ';
            }
            else {
                cout << (j-1)*n+i-1 << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}