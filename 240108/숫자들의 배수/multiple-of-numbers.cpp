#include <iostream>
using namespace std;
int main(){
    int n,f=0;
    cin >> n;
    for (int i=1;;i++){
        cout << n*i << ' ';
        if ((n*i)%5==0){
            f++;
            if (f==2) break;
        }
    }
    return 0;
}