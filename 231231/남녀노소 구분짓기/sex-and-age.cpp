#include <iostream>
using namespace std;
int main(){
    int g,a;
    cin >> g >> a;
    if (g==1){
        if (a>=19) cout << "WOMAN";
        else cout << "GIRL";
    }
    else {
        if (a>=19) cout << "MAN";
        else cout << "BOY";
    }
    return 0;
}