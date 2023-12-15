#include <iostream>
using namespace std;
int main(){
    int a1,a2;
    char g1,g2;
    cin >> a1 >> g1 >> a2 >> g2;
    if ((a1>=19 && g1=='M') || (a2>=19 && g2=='M')) cout << 1;
    else cout << 0;
    return 0;
}