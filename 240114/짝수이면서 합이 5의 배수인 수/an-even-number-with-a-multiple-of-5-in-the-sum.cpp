#include <iostream>
using namespace std;
int DIG(int n){
    if (n>9) return DIG(n/10)+n%10;
    else return n;
}
int main(){
    int n;
    cin >> n;
    if (n%2==0 && DIG(n)%5==0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}