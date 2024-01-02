#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int k=1;k<=2;k++){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                cout << '*';
            }
            cout << "\n";
        }
        cout << "\n\n";
    }
    return 0;
}