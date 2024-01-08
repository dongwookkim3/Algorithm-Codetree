#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int e=0,o=0;
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        if (i%2==0) e+=a;
        else o+=a;
    }
    cout << abs(e-o);
    return 0;
}