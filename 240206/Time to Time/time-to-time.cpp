#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    c-=a;
    d-=b;
    if (d<0){
        c--;
        d+=60;
    }
    if (c<0){
        c+=24;
    }
    cout << d+c*60;
    return 0;
}