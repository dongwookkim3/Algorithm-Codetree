#include <iostream>
#include <string>
using namespace std;
int main(){
    string A,B;
    int m=0;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,B.length())==B){
            m++;
        }
    }
    cout << m;
    return 0;
}