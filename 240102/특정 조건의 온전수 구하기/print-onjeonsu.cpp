#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=;i<=n;i++){
        if (i%2 && i%10==5 && (i%3==0 && i%9!=0)){
            cout << i << ' ';
        }
    }
    return 0;
}