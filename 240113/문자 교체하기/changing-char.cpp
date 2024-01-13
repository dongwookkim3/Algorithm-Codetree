#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    B[0]=A[0],B[1]=A[1];
    cout << B;
    return 0;
}