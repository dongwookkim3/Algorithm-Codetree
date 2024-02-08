#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string A;
    int a,b;
    cin >> a >> b;
    for (int i=pow(b,5);i>0;i/=b){
        if (a/i){
            A+=to_string(a/i);
            a%=i;
        }
    }
    cout << A;
    return 0;
}