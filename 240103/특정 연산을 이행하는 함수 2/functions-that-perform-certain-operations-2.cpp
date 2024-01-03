#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    cin >> a >> b >> c;
    if (a==max(a,max(b,c))) cout << ceil(a) << ' ';
    else if (a==min(a,min(b,c))) cout << floor(a) << ' ';
    else cout << round(a) << ' ';
    if (b==max(a,max(b,c))) cout << ceil(b) << ' ';
    else if (b==min(a,min(b,c))) cout << floor(b) << ' ';
    else cout << round(b) << ' ';
    if (c==max(a,max(b,c))) cout << ceil(c);
    else if (c==min(a,min(b,c))) cout << floor(c);
    else cout << round(c);
    
    return 0;
}