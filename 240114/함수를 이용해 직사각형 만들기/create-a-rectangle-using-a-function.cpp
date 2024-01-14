#include <iostream>
using namespace std;
void Square(int n,int m){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout << '1';
        }
        cout << "\n";
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    Square(n,m);
    return 0;
}