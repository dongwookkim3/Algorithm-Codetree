#include <iostream>
using namespace std;
int main(){
    int a,b,m=1;
    cin >> a >> b;
    for (int i=1;i<=b;i++){
        if (i%a==0){
            m*=i;
        }
    }
    cout << m;
    return 0;
}