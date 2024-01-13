#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    while(1){
        string A;
        cin >> A;
        if (A=="END") break;
        reverse(A.begin(),A.end());
        cout << A << "\n";
    }
    return 0;
}