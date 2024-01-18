#include <iostream>
using namespace std;
int gcd(int A,int B){
    if (B==0) return A;
    else return gcd(B,A%B);
}
int lcm(int A,int B){
    return A*B/gcd(A,B);
}
int main(){
    int n,LCM=1;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        LCM=lcm(a,LCM);
    }
    cout << LCM;
    return 0;
}