#include <iostream>
using namespace std;
int main(){
    int m=20;
    for (int i=1;i<=3;i++){
        string A;
        cin >> A;
        if (m>A.length()){
            m=A.length();
        }
    }
    cout << m;
    return 0;
}