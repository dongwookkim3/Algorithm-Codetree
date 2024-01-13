#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    string C=A+B;
    B+=A;
    cout << (stoi(C)+stoi(B));
    return 0;
}