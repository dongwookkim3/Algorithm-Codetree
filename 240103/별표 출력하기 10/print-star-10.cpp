#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%2==0){
            for (int j=n-(i-1)/2;j>=1;j--){
                cout << "* ";
            }
        }
        else {
            for (int j=1+i/2;j>=1;j--){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    for (int i=n;i>=1;i--){
        if (i%2==0){
            for (int j=n-(i-1)/2;j>=1;j--){
                cout << "* ";
            }
        }
        else {
            for (int j=1+i/2;j>=1;j--){
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}