#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,m=0;
        cin >> a;
        while(a!=1){
            if (a%2==1){
                a=a*3+1;
            }
            else {
                a/=2;
            }
            m++;
        }
        cout << m << "\n";
    }
    return 0;
}