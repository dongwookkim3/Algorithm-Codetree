#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    int n;
    cin >> A >> n;
    for (int i=A.length()-1;i>=max(0,(int)A.length()-n);i--){
        cout << A[i];
    }
    return 0;
}