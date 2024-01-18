#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        int a,b;;
        cin >> a >> b;
        if (a+b>m){
            m=a+b;
        }
    }
    cout << m;
    return 0;
}