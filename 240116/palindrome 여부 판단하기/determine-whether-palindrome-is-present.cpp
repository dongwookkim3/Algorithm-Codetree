#include <iostream>
#include <algorithm>
using namespace std;
void palindrome(string &a,string &b){
    b=a;
    reverse(b.begin(),b.end());
}
int main(){
    string A,B;
    cin >> A;
    palindrome(A,B);
    if (A==B) cout << "Yes";
    else cout << "No";
    return 0;
}