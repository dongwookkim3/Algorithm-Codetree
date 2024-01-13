#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<=A.length();i++){
        if (A[i]>=65 && A[i]<=90) cout << A[i];
        else if (A[i]>=96 && A[i]<=123) cout << (char)(A[i]-32);
    }
    return 0;
}