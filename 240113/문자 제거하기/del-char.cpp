#include <iostream>
#include <string>
using namespace std;
int main(){
    string A;
    cin >> A;
    while(A.length()>1){
        int a;
        cin >> a;
        if (a>A.length()-1) A.erase(A.length()-1,1);
        else A.erase(a,1);
        cout << A << "\n";
    }
    return 0;
}