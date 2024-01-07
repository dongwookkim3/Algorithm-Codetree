#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int m=1;
        int a,b;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
            m*=i;
        }
        cout << m << "\n";
    }
    return 0;
}