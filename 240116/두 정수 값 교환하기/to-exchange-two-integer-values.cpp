#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int main(){
    int n,m;
    cin >> n >> m;
    swap(n,m);
    cout << n << ' ' << m;
    return 0;
}