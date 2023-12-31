#include <iostream>
using namespace std;
int main(){
    int n,m1=0,m2=0,m3=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%12==0) m3++;
        else if (i%6==0) m2++;
        else if (i%3==0) m2++;
        else if (i%2==0) m1++;
    }
    cout << m1 << ' ' << m2 << ' ' << m3;
    return 0;
}