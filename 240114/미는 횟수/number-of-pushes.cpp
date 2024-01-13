#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A==B){
            cout << i;
            return 0;
        }
        B=B.substr(1,B.length())+B[0];
    }
    cout << -1;
    return 0;
}