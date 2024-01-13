#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]<48 || A[i]>57){
            A.erase(i,1);
            i--;
        }
    }
    for (int i=0;i<B.length();i++){
        if (B[i]<48 || B[i]>57){
            B.erase(i,1);
            i--;
        }
    }
    cout << stoi(A)+stoi(B);
    return 0;
}