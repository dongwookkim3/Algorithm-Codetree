#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;;i++){
        if (n==1){
            cout << i;
            break;
        }
        if (n%2==0) n/=2;
        else n=n*3+1;
    }
    return 0;
}