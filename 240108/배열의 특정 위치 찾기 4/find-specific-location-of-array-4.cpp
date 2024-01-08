#include <iostream>
using namespace std;
int main(){
    int n=0,m=0;
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        if (a==0) break;
        if (a%2==0){
            n++;
            m+=a;
        }
    }
    cout << n << ' ' << m;
    return 0;
}