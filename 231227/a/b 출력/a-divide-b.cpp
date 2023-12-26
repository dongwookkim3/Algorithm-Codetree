#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    cout << A/B << '.';
    A%=B;
    for (int i=1;i<=20;i++){
        A*=10;
        cout << A/B;
        A%=B;
    }
    return 0;
}