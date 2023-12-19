#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    if (k==1){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout << '*';
            }
            cout << "\n";
        }
    }
    else if (k==2){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n-i+1;j++){
                cout << '*';
            }
            cout << "\n";
        }
    }
    else {
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n-i;j++){
                cout << ' ';
            }
            for (int j=1;j<=(i-1)*2+1;j++){
                cout << '*';
            }
            cout << "\n";
        }
    }
    return 0;
}