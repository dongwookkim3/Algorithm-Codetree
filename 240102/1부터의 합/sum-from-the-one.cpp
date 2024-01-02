#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=100;i++){
        n-=i;
        if (n<=0){
            cout << i;
            break;
        }
    }
    return 0;
}