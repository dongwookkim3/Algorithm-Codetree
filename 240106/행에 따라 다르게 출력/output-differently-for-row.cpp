#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i%2==1){
                cout << m << ' ';
                m++;
            }
            else {
                cout << m << ' ';
                m+=2;
            }
        }
        if (i%2==1) m++;
        else m--;
        cout << "\n";
    }
    return 0;
}