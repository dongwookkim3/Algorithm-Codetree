#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    A[1]='a',A[A.length()-2]='a';
    cout << A;
    return 0;
}