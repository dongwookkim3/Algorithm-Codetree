#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    string B=A;
    cout << B << "\n";
    B=B[B.length()-1]+B.substr(0,B.length()-1);
    while(A!=B){
        cout << B << "\n";
        B=B[B.length()-1]+B.substr(0,B.length()-1);
    }
    cout << B;
    return 0;
}