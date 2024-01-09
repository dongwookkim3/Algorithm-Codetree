#include <iostream>
using namespace std;
int main(){
    string A="LEBROS";
    char c;
    cin >> c;
    for (int i=0;i<A.length();i++){
        if (A[i]==c){
            cout << i;
            break;
        }
    }
    return 0;
}