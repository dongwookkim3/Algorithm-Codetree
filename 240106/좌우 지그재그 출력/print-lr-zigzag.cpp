#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i%2==1){
                cout << j+(i-1)*n << ' ';
            }
            else {
                cout << i*n-j+1 << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}