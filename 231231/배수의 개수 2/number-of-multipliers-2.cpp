#include <iostream>
using namespace std;
int main(){
    int m=0;
    for (int i=1;i<=10;i++){
        int a;
        cin >> a;
        if (a%2==1) m++;
    }
    cout << m;
    return 0;
}