#include <iostream>
using namespace std;
int main(){
    int n,A=0,B=0;
    cin >> n;
    while(n--){
        char b;
        int num;
        cin >> b >> num;
        if (b=='E'){
            A+=num;
        }
        else if (b=='N'){
            B+=num;
        }
        else if (b=='S'){
            B-=num;
        }
        else {
            A-=num;
        }
    }
    cout << A << ' ' << B;
    return 0;
}