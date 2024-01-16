#include <iostream>
#include <algorithm>
using namespace std;
bool f(string &a){
    sort(a.begin(),a.end());
    return !(a[0]==a[a.length()-1]);
}
int main(){
    string A;
    cin >> A;
    if (f(A)) cout << "Yes";
    else cout << "No";
    return 0;
}