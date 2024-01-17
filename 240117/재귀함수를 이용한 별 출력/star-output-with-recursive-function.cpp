#include <iostream>
using namespace std;
void Star(int n){
    if (n==0) return;
    Star(n-1);
    for (int i=1;i<=n;i++){
        cout << '*';
    }
    cout << "\n";
}
int main(){
    int n;
    cin >> n;
    Star(n);
    return 0;
}