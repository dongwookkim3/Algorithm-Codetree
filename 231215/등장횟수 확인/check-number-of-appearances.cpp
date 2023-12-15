#include <iostream>
using namespace std;
int main(){
    int m=0;
    for (int i=1;i<=5;i++){
        int a;
        cin >> a;
        if (a%2==0) m++;
    }
    cout << m;
    return 0;
}