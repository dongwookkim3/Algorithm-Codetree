#include <iostream>
using namespace std;
void binary(int n){
    if (n/2){
        binary(n/2);
        cout << n%2;
    }
    else {
        cout << n;
    }
}
int main(){
    int n;
    cin >> n;
    binary(n);
    return 0;
}