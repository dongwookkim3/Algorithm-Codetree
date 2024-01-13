#include <iostream>
using namespace std;
int main(){
    string A;
    int m=0;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]>=48 && A[i]<=57){
            m+=A[i]-48;
        }
    }
    cout << m;
    return 0;
}