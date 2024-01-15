#include <iostream>
using namespace std;
int CAL(int A,char C,int B){
    if (C=='+') return A+B;
    else if (C=='-') return A-B;
    else if (C=='*') return A*B;
    else if (C=='/') return A/B;
    else return 0;
}
int main(){
    int a,b;
    char c;
    cin >> a >>  c >> b;
    if (CAL(a,c,b)) cout << a << ' ' << c << ' ' << b << " = " << CAL(a,c,b);
    else cout << "False";
    return 0;
}