#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,B.length())==B){
            A.erase(i,B.length());
            i=0;
        }
    }
    if (A!=B) cout << A;
    return 0;
}