#include <iostream>
using namespace std;
int main(){
    string A="LEBROS";
    char c;
    cin >> c;
    for (int i=0;i<A.length();i++){
        if (A[i]==c){
            cout << i;
            return 0;
        }
    }
    cout << "None";
    return 0;
}