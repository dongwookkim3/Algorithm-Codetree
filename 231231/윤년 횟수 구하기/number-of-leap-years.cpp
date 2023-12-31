#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (i%4==0){
            if (i%100!=0){
                m++;
            }
            else if (i%400==0){
                m++;
            }
            else m++;
        }
    }
    cout << m;
    return 0;
}