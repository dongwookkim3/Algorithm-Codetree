#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;;i++){
        if (n%2==0){
            n=n*3+1;
        }
        else {
            n=n*2+2;
        }
        if (n>=1000){
            cout << i;
            break;
        }
    }
    return 0;
}