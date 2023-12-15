#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if (a<=0){
        cout << 0;
        return 0;
    }
    while(b--){
        cout << a;
    }
    return 0;
}