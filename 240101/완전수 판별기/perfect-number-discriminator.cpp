#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<n;i++){
        if (n%i==0){
            m+=i;
        }
    }
    if (n==m) cout << "P";
    else cout << "N";
    return 0;
}