#include <iostream>
using namespace std;
int main(){
    float n;
    cin >> n;
    if (n>=1) cout << "High";
    else if (n>=0.5) cout << "Middle";
    else cout << "Low";
    return 0;
}