#include <iostream>
using namespace std;
int main(){
    int a,b,m=0,m1=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        if (i%5==0 || i%7==0){
            m+=i;
            m1++;
        }
    }
    cout << m << ' ' << (float)m/m1;
    return 0;
}