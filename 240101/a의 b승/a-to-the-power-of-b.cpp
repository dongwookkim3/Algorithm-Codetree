#include <iostream>
using namespace std;
int main(){
    int a,b,m=1;
    cin >> a >> b;
    while(b--){
        m*=a;
    }
    cout << m;
    return 0;
}