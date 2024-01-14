#include <iostream>
using namespace std;
int ADD(int n){
    int m=0;
    for (int i=1;i<=n;i++){
        m+=i;
    }
    return m/10;
}
int main(){
    int n;
    cin >> n;
    cout << ADD(n);
    return 0;
}