#include <iostream>
using namespace std;
int main(){
    int n,m=0,t=0;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        if (a[0]=='a') m++;
        t+=a.length();
    }
    cout << t << ' ' << m;
    return 0;
}