#include <iostream>
using namespace std;
int main(){
    int y;
    cin >> y;
    if (y%4==0){
        if (y%100==0){
            if (y%400==0) cout << "true";
            else cout << "false";
        }
        else cout << "true";
    }
    else cout << "false";
    return 0;
}