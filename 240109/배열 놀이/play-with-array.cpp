#include <iostream>
#define MAX 100
using namespace std;
int main(){
    int n,k;
    int A[MAX+1]={};
    cin >> n >> k;
    for (int i=1;i<=n;i++){
        cin >> A[i];
    }
    while (k--){
        int m;
        cin >> m;
        if (m==1){
            int a;
            cin >> a;
            cout << A[a] << "\n";
        }
        else if (m==2){
            int a;
            cin >> a;
            for (int i=1;i<=n;i++){
                if (A[i]==a){
                    cout << i << "\n";
                    break;
                }
                else if (i==n){
                    cout << 0 << "\n";
                }
            }

        }
        else {
            int a,b;
            cin >> a >> b;
            for (int i=a;i<=b;i++){
                cout << A[i] << ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}