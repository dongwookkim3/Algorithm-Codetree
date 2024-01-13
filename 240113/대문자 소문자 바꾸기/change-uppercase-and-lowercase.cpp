#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]>90) cout << (char)(A[i]-32);
        else cout << (char)(A[i]+32);
    }
    return 0;
}