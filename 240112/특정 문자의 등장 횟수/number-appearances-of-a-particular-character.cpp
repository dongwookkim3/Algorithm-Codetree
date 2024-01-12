#include <iostream>
using namespace std;
int main(){
    string A;
    int a=0,b=0;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,2)=="ee") a++;
        if (A.substr(i,2)=="eb") b++;
    }
    cout << a << ' ' << b;
    return 0;
}