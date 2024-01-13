#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='e'){
            A.erase(i,1);
            break;
        }
    }
    cout << A;
    return 0;
}