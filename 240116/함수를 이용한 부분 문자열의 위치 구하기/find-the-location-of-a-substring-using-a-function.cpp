#include <iostream>
using namespace std;
int f(string &A,string &B){
    for (int i=0;i<A.length();i++){
        if (A.substr(i,B.length())==B){
            return i;
        }
    }
    return -1;
}
int main(){
    string A,B;
    cin >> A >> B;
    cout << f(A,B);
    return 0;
}