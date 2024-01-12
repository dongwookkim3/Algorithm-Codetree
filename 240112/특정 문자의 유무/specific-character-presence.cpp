#include <iostream>
#include <string>
using namespace std;
int main(){
    string A;
    bool a=0,b=0;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,2)=="ee") a=1;
        if (A.substr(i,2)=="ab") b=1;
    }
    if (a==1) cout << "Yes ";
    else cout << "No ";
    if (b==1) cout << "Yes";
    else cout << "No";
    return 0;
}