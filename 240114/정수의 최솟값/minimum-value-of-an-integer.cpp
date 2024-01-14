#include <iostream>
using namespace std;
int min(int A,int B){
    if (A>=B) return B;
    else return A;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(a,min(b,c));
    return 0;
}