#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        m+=a;
    }
    string A=to_string(m);
    A=A.substr(1,A.length()-1)+A[0];
    cout << A;
    return 0;
}