#include <iostream>
using namespace std;
int main(){
    int i;
    float m=0;
    for (i=1;i<=10;i++){
        int a;
        cin >> a;
        m+=a;
        if (a==0){
            i--;
            break;
        }
    }
    cout << m << ' ';
    cout << fixed;
    cout << precision(1);
    cout << m/i;
    return 0;
}