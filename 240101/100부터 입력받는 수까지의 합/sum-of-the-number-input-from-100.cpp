#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=n;i<=100;i++){
        m+=i;
    }
    cout << m;
    return 0;
}