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
int f(int n){
    if (n>9) return f(n/10)+n%10;
    else return n;
}
int main(){
    int a,b,m=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        if (Prime(i) && !(f(i)%2)){
            m++;
        }
    }
    cout << m;
    return 0;
}