#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;;i++){
        n/=i;
        uf (n<=1){
            cout << i;
            break;
        }
    }
    return 0;
}