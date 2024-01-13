#include <iostream>
using namespace std;
int main(){
    string A,B;
    int a=0,b=0;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]>=48 && A[i]<=57){
            a*=10;
            a+=A[i]-48;
        }
        else break;
    }
    for (int i=0;i<B.length();i++){
        if (B[i]>=48 && B[i]<=57){
            b*=10;
            b+=B[i]-48;
        }
        else break;
    }
    cout << a+b;
    return 0;
}