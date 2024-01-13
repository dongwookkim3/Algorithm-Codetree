#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    char a=A[1];
    for (int i=0;i<A.length();i++){
        if (A[i]==a){
            A[i]=A[0];
        }
    }
    cout << A;
    return 0;
}