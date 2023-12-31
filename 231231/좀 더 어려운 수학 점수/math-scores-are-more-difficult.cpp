#include <iostream>
using namespace std;
int main(){
    int Am,Ae,Bm,Be;
    cin >> Am >> Ae >> Bm >> Be;
    if (Am==Bm){
        if (Ae>Be) cout << 'A';
        else cout << 'B';
    }
    else {
        if (Am>Bm) cout << 'A';
        else cout << 'B';
    }
    return 0;
}