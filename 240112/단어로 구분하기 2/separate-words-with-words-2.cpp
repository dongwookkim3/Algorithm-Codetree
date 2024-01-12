#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=10;i++){
        string A;
        cin >> A;
        if (i%2){
            cout << A << "\n";
        }
    }
    return 0;
}