#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    while(b--){
        if (a<=0) cout << 0;
        else cout << a;
    }
    return 0;
}