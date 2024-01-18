#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    cin >> A;
    sort(A.begin(),A.end());
    cout << A;
    return 0;
}