#include <iostream>
using namespace std;
int main(){
    int a,b,n=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        int m=0;
        for (int j=1;j<=i;j++){
            if (i%j==0) m++;
        }
        if (m==3) n++;
    }
    cout << n;
    return 0;
}