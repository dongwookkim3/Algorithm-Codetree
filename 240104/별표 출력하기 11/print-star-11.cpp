#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    n=n*2+1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i%2==1) cout << "* ";
            else if (j%2==1) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}