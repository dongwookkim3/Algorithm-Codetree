#include <iostream>
using namespace std;
int main(){
    int a,n;
    cin >> a >> n;
    for (int i=1;i<=n;i++){
        cout << a << "\n";
        a+=n;
    }
    return 0;
}