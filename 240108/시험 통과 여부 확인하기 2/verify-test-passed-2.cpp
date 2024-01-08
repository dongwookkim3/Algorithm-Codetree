#include <iostream>
using namespace std;
int main(){
    int n,t=0;
    cin >> n;
    while(n--){
        int m=0;
        for (int i=1;i<=4;i++){
            int a;
            cin >> a;
            m+=a;
        }
        if (m>=240){
            cout << "pass\n";
            t++;
        }
        else {
            cout << "fail\n";
        }
    }
    cout << t;
    return 0;
}