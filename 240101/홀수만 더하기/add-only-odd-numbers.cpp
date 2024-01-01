#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a%2 && a%3==0){
            m+=a;
        }
    }
    cout << m;
    return 0;
}