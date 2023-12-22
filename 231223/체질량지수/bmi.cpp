#include <iostream>
using namespace std;
int main(){
    float c;
    int k;
    cin >> c >> k;
    c/=100;
    int m=k/c;
    cout << m << "\n";
    if (c>=25) cout << "Obesity";
    return 0;
}