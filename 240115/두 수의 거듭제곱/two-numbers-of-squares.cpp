#include <iostream>
using namespace std;
int pow(int A,int B){
    int m=1;
    while(B--){
        m*=A;
    }
    return m;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << pow(a,b);
    return 0;
}