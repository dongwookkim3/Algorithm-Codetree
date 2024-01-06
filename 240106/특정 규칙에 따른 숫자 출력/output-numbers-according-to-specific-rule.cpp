#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    for (int i=n;i>=1;i--){
        for (int j=1;j<=n-i;j++){
            cout << "  ";
        }
        for (int j=1;j<=i;j++){
            cout << m << ' ';
            m++;
            if (m==10) m=1;
        }
        cout << "\n";
    }
    return 0;
}