#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    for (int i=max(a,b);i>=min(a,b);i--){
        cout << i << ' ';
    }
    return 0;
}