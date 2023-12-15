#include <iostream>
using namespace std;
int main(){
    int a,b,m=0;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        if (i%6==0 && i%8!=0){
            m+=i;
        }
    }
    cout << m;
    return 0;
}