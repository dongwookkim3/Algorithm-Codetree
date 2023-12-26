#include <iostream>
using namespace std;
int main(){
    char A;
    cin >> A;
    if (A=='S') cout << "Superior";
    else if (A=='A') cout << "Excellent";
    else if (A=='B') cout << "Good";
    else if (A=='C') cout << "Usually";
    else if (A=='D') cout << "Effort";
    else cout << "Failure";
    return 0;
}