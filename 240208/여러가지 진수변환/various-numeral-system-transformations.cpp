#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string A;
    int a,b;
    cin >> a >> b;
    for (int i=pow(b,6);i>=0;i/=b){
        if (a/i){
            A+=a/i;
            a%=i;
        }
    }
    cout << A;
    return 0;
}