#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,m=0;
    cin >> a >> b;
    for (int i=min(a,b);i<=max(a,b);i++){
        if (i%5==0){
            m+=i;
        }
    }
    cout << m;
    return 0;
}