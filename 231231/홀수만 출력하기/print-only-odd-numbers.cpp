#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a%2==1 && a%3==0){
            cout << a << "\n";
        }
    }
    return 0;
}