#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=A.length()-1;i>=0;i--){
        if (i%2==0) continue;
        cout << A[i];
    }
    return 0;
}