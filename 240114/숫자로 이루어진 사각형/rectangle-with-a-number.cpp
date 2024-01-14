#include <iostream>
using namespace std;
void Print(int n){
    int m=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << m << ' ';
            m++;
            if (m==10) m=1;
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    Print(n);
    return 0;
}