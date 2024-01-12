#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        A+=a;
    }
    for (int i=0;i<A.length();i++){
        cout << A[i];
        if (i%5==4) cout << "\n";
    }
    return 0;
}