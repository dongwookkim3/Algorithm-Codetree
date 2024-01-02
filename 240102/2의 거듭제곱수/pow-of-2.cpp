#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;;i++){
        if (pow(2,i)==n){
            cout << i;
            break;
        }
    }
    return 0;
}