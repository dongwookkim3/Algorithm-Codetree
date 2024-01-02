#include <iostream>
using namespace std;
int main(){
    int n,m=1;
    cin >> n;
    for (int i=1;;i++){
        m*=i;
        if (n<=m){
            cout << i;
            break;
        }
    }
    return 0;
}