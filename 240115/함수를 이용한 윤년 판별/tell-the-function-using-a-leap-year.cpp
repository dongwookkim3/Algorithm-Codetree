#include <iostream>
using namespace std;
bool f(int n){
    if (n%4==0){
        if (n%100==0){
            if (n%400==0){
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    if (f(n)) cout << "true";
    else cout << "false";
    return 0;
}