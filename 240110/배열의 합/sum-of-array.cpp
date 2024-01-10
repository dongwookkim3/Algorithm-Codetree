#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=4;i++){
        int m=0;
        for (int j=1;j<=4;j++){
            int a;
            cin >> a;
            m+=a;
        }
        cout << m << "\n";
    }
    return 0;
}