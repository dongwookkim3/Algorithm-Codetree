#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    char a=A[0],b=A[1];
    for (int i=0;i<A.length();i++){
        if (A[i]==a) A[i]=b;
        else if (A[i]==b) A[i]=a;
    }
    cout << A;
    return 0;
}