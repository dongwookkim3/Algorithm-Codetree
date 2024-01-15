#include <iostream>
using namespace std;
bool f(int n){
    if (n%2==0) return 0;
    if (n%10==5) return 0;
    if (n%3==0 && n%9!=0) return 0;
    return 1;
}
int main(){
    int a,b,m=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        if (f(i)){
            m++;
        }
    }
    cout << m;
    return 0;
}