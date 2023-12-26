#include <iostream>
using namespace std;
int main(){
    int n;
    char A;
    cin >> A >> n;
    if (A=='A'){
        for (int i=1;i<=n;i++){
            cout << i << ' ';
        }
    }
    else {
        for (int i=n;i>=1;i++){
            cout << i << ' ';
        }
    }
    return 0;
}