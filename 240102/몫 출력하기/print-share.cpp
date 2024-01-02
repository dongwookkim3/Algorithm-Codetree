#include <iostream>
using namespace std;
int main(){
    int n;
    while(1){
        cin >> n;
        if (cin.eof()) break;
        if (n%2==0){
            cout << n/2 << "\n";
        }
    }
    return 0;
}