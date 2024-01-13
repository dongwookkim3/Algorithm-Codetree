#include <iostream>
#include <string>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,B.length())==B){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}