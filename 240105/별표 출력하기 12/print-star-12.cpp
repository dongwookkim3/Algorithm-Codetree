#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n==1) cout << '*';
    for (int i=1;i<=(n/2)*2;i++){
        for (int j=1;j<=n;j++){
            if (i==1 || (j%2==0 && j>=i)){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}