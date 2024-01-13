#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<B.length();i++){
        if (B[i]=='L'){
            A=A.substr(1,A.length()-1)+A[0];
        }
        else {
            A=A[A.length()-1]+A.substr(0,A.length()-1);
        }
    }
    cout << A;
    return 0;
}