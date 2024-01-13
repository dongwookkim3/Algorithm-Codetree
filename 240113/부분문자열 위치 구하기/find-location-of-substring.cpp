#include <iostream>
#include <string>
using namespace std;
int main(){
    int n=0;
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,B.length())==B){
            n++;
        }
    }
    if (n==0) cout << -1;
    else cout << n;
    return 0;
}