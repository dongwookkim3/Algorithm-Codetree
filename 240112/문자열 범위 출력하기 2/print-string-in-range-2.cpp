#include <iostream>
using namespace std;
int main(){
    string A;
    int n;
    cin >> A >> n;
    for (int i=A.length()-1;i>=A.length()-n;i--){
        cout << A[i];
    }
    return 0;
}