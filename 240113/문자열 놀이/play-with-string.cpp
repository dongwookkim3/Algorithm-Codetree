#include <iostream>
using namespace std;
int main(){
    string A;
    int n;
    cin >> A >> n;
    while(n--){
        int a;
        cin >> a;
        if (a==1){
            int b,c;
            cin >> b >> c;
            char t=A[b-1];
            A[b-1]=A[c-1];
            A[c-1]=t;
        }
        else {
            char b,c;
            cin >> b >> c;
            for (int i=0;i<A.length();i++){
                if (A[i]==b){
                    A[i]=c;
                }
            }
        }
        cout << A << "\n";
    }
    return 0;
}