#include <iostream>
using namespace std;
int main(){
    int a,b,c,d=0,a1=11,b1=11,c1=11;
    cin >> a >> b >> c;
    while(a!=a1 || b!=b1 || c!=c1){
        d++;
        c1++;
        if (c1==60){
            c1=0;
            b1++;
            if (b1==24){
                b1=0;
                a1++;
                if (a1==15){
                    cout << -1;
                    return 0;
                }
            }
        }
    }
    cout << d;
    return 0;
}