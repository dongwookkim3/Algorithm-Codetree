#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    int k;
    cin >> A >> k;
    while(k--){
        int a;
        cin >> a;
        if (a==1){
            A=A.substr(1,A.length()-1)+A[0];
        }
        else if (a==2){
            A=A[A.length()-1]+A.substr(0,A.length()-1);
        }
        else {
            reverse(A.begin(),A.end());
        }
        cout << A << "\n";
    }
    return 0;
}