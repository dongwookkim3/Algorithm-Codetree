#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if (A==B) cout << "Yes";
    else cout << "No";
    return 0;
}