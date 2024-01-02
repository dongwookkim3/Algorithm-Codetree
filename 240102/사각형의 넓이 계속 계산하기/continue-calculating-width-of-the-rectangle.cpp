#include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    while(cin >> a >> b >> c){
        cout << a*b << "\n";
        if (c=='C') break;
    }
    return 0;
}