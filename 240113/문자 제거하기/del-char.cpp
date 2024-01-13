#include <iostream>
#include <string>
using namespace std;
int main(){
    string A;
    int n;
    cin >> A >> n;
    while(n--){
        int a;
        cin >> a;
        A.erase(a,1);
        cout << A << "\n";
    }
    return 0;
}