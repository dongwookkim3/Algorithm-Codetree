#include <iostream>
using namespace std;
int main(){
    int max=-999,min=999;
    while(1){
        int a;
        cin >> a;
        if (a==-999 || a==999) break;
        if (a>max) max=a;
        if (a<min) min=a;
    }
    cout << max << ' ' << min;
    return 0;
}