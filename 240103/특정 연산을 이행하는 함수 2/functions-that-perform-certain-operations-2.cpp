#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    cin >> a >> b >> c;
    cout << ceil(max(a,max(b,c))) << ' ' << floor(min(a,min(b,c))) << ' ' << round(a+b+c-max(a,max(b,c))-min(a,min(b,c)));
    return 0;
}