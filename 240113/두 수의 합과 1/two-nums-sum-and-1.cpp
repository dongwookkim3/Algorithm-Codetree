#include <iostream>
using namespace std;
int main(){
    int a,b,m=0;
    cin >> a >> b;
    string A=to_string(a+b);
    for (int i=0;i<A.length();i++){
        if (A[i]=='1'){
            m++;
        }
    }
    cout << m;
    return 0;
}