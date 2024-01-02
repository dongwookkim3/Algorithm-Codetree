#include <iostream>
using namespace std;
int main(){
    while(1){
        int a;
        cin >> a;
        if (a<25) cout << "Higher";
        else if (a>25) cout << "Lower";
        else {
            cout << "Good";
            break;
        }
    }
    return 0;
}