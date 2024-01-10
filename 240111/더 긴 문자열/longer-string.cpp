#include <iostream>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    if (A.length()>B.length()){
        cout << A << ' ' << A.length();
    }
    else if (A.length()<B.length()){
        cout << B << ' ' << B.length();
    }
    else {
        cout << "same";
    }
    return 0;
}