#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=3;j++){
            char c;
            cin >> c;
            cout << (char)(c-32) << ' ';
        }
        cout << "\n";
    }
    return 0;
}