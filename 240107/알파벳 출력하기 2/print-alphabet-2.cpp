#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    for (int i=n;i>=1;i--){
        for (int j=n-i;j>=1;j--){
            cout << "  ";
        }
        for (int j=1;j<=i;j++){
            cout << (char)(m+64) << ' ';
            m++;
            if (m>26) m=1;
        }
        cout << "\n";
    }
    return 0;
}