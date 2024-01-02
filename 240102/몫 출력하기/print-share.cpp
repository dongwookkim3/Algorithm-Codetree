#include <iostream>
using namespace std;
int main(){
    int m=3;
    while(m){
        int n;
        cin >> n;
        if (n%2==0){
            m--;
            cout << n/2 << "\n";
        }
    }
    return 0;
}