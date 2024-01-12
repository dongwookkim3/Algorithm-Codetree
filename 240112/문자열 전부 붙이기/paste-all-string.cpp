#include <iostream>
using namespace std;
int main(){
    string A;
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        A+=a;
    }
    cout << A;
    return 0;
}