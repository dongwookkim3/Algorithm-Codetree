#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n >> A;
    while(n--){
        string a;
        cin >> a;
        m+=(A==a);
    }
    cout << m;
    return 0;
}