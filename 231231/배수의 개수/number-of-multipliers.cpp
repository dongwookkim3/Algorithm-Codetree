#include <iostream>
using namespace std;
int main(){
    int n=10,m3=0,m5=0;
    while(n--){
        int a;
        cin >> a;
        if (a%3==0) m3++;
        if (a%5==0) m5++;
    }
    cout << m3 << ' ' << m5;
    return 0;
}