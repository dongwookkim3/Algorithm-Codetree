#include <iostream>
using namespace std;
bool Prime(int n){
    for (int i=2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(void){
    int a,b,m=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        if (Prime(i) && i!=1){
            m+=i;
        }
    }
    cout << m;
    return 0;
}