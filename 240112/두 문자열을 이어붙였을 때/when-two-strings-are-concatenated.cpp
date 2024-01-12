#include <iostream>
using namespace std;
int main(){
    string A,B,a,b;
    cin >> a >> b;
    A+=a,A+=b,B+=b,B+=a;
    if (A==B) cout << "true";
    else cout << "false";
    return 0;
}