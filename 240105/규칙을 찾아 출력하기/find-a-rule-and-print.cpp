#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n<=3){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (i==1 || i==n || j==1 || j==n){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
    else {
        bool A[MAX+1][MAX+1]={};
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (i==1 || i==n || j==1 || j==n){
                    A[i][j]=1;
                }
            }
        }
        for (int i=2;i<=n;i++){
            for (int j=1;j<=i-1;j++){
                A[i][j]=1;
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (A[i][j]){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}