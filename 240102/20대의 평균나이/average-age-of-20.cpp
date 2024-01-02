#include <iostream>
using namespace std;
int main(){
    int n=0,m=0;
    while(1){
        int a;
        cin >> a;
        if (a>=30) break;
        n+=a;
        m++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (float)n/m;
    return 0;
}