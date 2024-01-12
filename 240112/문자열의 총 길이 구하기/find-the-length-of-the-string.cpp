#include <iostream>
using namespace std;
int main(){
    int m=0;
    for (int i=1;i<=10;i++){
        string a;
        cin >> a;
        m+=a.length();
    }
    cout << m;
    return 0;
}