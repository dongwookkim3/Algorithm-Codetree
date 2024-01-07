#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b,m=0;
        cin >> a >> b;
        for (int i=a;i<=b;i++){
            if (i%2==0) m+=i;
        }
        cout << m << "\n";
    }
    return 0;
}