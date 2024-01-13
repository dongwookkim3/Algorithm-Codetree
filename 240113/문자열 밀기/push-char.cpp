#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    A=A.substr(1,A.length()-1)+A[0];
    cout << A;
    return 0;
}