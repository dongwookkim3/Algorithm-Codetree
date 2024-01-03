#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%2) cout << '*';
        else {
            for (int j=1;j<=i;j++){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}