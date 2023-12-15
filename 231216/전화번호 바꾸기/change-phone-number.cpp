#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cout.width(3);
    cout.fill('0');
    cout << a << '-';
    cout.width(4);
    cout << c << '-' << b;
    return 0;
}