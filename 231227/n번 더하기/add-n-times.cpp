#include <iostream>
using namespace std;
int main(){
    int a,n;
    cin >> a >> n;
    for (int i=1;i<=n;i++){
        a+=n;
        cout << a << "\n";
    }
    return 0;
}