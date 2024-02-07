#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m=0;
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        m+=(A[i]-48)*pow(2,A.length()-i-1);
    }
    cout << m;
    return 0;
}