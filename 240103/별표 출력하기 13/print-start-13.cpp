#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%2){
            for (int j=1;j<=n-i/2;j++){
                cout << "* ";
            }
        }
        else {
            for (int j=1;j<=i/2;j++){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    for (int i=n;i>=1;i--){
        if (i%2){
            for (int j=1;j<=n-i/2;j++){
                cout << "* ";
            }
        }
        else {
            for (int j=1;j<=i/2;j++){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}