#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (a==2) m++;
        if (m==3){
            cout << i;
            break;
        }
    }
    return 0;
}