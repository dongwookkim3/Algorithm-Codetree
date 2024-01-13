#include <iostream>
#include <string>
using namespace std;
int main(){
    string A;
    cin >> A;
    A.erase(1,1);
    A.erase(A.length()-2,1);
    cout << A;
    return 0;
}