#include <iostream>
using namespace std;
int main(){
    string A;
    int n;
    cin >> A >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a==1){
            char t=A[b-1];
            A[b-1]=A[c-1];
            A[c-1]=t;
        }
        else {
            for (int i=0;i<A.length();i++){
                if (A[i]==b+97){
                    A[i]=(char)c+97;
                }
            }
        }
        cout << A << "\n";
    }
    return 0;
}