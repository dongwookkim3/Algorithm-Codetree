#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%2!=0 && i%3!=0 && i%5!=0) continue;
        m++;
    }
    cout << m;
    return 0;
}